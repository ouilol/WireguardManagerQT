#include "pch.h"
#include "WireguardManager.h"

#include <filesystem>

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <algorithm>
#include <fstream>

std::string exec(const char* cmd);
std::string trim_start(const std::string& str);

void WireguardManagerLib::WireguardManager::initialize()
{
#ifdef WIN32
	if (!options.wg_path.has_value())
		throw std::exception("Wireguard Path (wg_path) required on Windows");

	//first test if the provided file actually exists

	if (!std::filesystem::exists(*options.wg_path))
		throw std::exception("Provided Wireguard Path (wg_path) does not exist");

	if (!options.wg_config_path.has_value())
		options.wg_config_path = "C:\\Program Files\\WireGuard\\Data\\Configurations";
#else
	if (!options.wg_path.has_value())
		options.wg_path = "wg"; // on linux, wg can already be found in the path
	if (!options.wg_config_path.has_value())
		options.wg_config_path = "/etc/wireguard"; // on linux, wg can already be found in the path
#endif
}

std::vector<WireguardManagerLib::interface_values> WireguardManagerLib::WireguardManager::wg_show()
{
	std::vector<WireguardManagerLib::interface_values> interfaces;

	auto lines = query_wg_raw();

	interface_values* current_interface = nullptr;
	interface_values* current_peer = nullptr;

	for (auto line = lines.begin(); line != lines.end(); ++line)
	{
		auto separator = std::find(line->begin(), line->end(), ':');
		if (separator == line->end() || separator + 1 == line->end()) // an invalid line ? it should always be "something : value"
			continue;

		std::string left(line->begin(), separator);
		std::string right(separator + 1, line->end());
		right = trim_start(right);


		if (left == "interface") // found the line for the interface
		{
			current_interface = &interfaces.emplace_back(interface_values());
			current_peer = nullptr; // in a new interface, we're not changing another interface's peer

			current_interface->set_name(std::move(right));
		}
		else if (left == "peer" && current_interface != nullptr)
		{
			current_peer = &current_interface->get_peers().emplace_back(interface_values());

			current_peer->set_name(std::move(right));
		}
		else if (current_peer != nullptr) // we're ediing a peer right now, otherwise that would be null
			(*current_peer)[std::move(left)] = std::move(right);
		else if (current_interface != nullptr)
			(*current_interface)[std::move(left)] = std::move(right);
	}

	return interfaces;
}

WireguardManagerLib::interface_values WireguardManagerLib::WireguardManager::wg_show(const std::string& interface_name)
{
	auto interfaces = wg_show();

	auto interface_found = std::find_if(std::begin(interfaces), std::end(interfaces), [&](const interface_values& current)
	{
		return current.get_name() == interface_name;
	});

	if (interface_found == std::end(interfaces))
		return interface_values();

	return *interface_found;
}

void WireguardManagerLib::WireguardManager::add_interface(const std::string& name, const std::string& config)
{
	auto path = std::filesystem::path(*options.wg_config_path);
	path /= name + ".conf"; // concat...

	if (std::filesystem::exists(path))
		throw std::exception("Interface already exists");


	std::ofstream file(name);
	file << config;
	file.close();
}

std::vector<std::string> WireguardManagerLib::WireguardManager::query_wg_raw()
{
	const auto rawStr = std::move(exec(options.wg_path->data()));

	std::stringstream strStream(rawStr);

	std::string segment;

	std::vector<std::string> lines;
	while (std::getline(strStream, segment))
	{
		if (segment.empty())
			continue; // shouldn't happen but.. meh

		auto segment_trimmed = trim_start(segment);
		if (!segment_trimmed.empty()) // if it's empty we don't want it anyway
			lines.emplace_back(std::move(segment_trimmed));
	}

	return lines;
}
std::string trim_start(const std::string& str)
{
	// we have a line, let's just remove the junk spaces and tabs in the beginning of the line
	// there's no "Trim()" in c++ so, here we goddam go:
	auto first_real_character = std::find_if(str.begin(), str.end(), [](const char& c)
	{
		return c != ' ' && c != '\t';
	});

	if (first_real_character != str.end()) // if we found something, if not, it's an empty line and we don't want it anyway
		return std::string(first_real_character, str.end());

	return std::string();
}

inline bool hasEnding(const std::string& fullString, const std::string& ending) {
	if (fullString.length() >= ending.length())
		return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
	else
		return false;
}

std::vector<std::string> WireguardManagerLib::WireguardManager::get_wg_config_file_names()
{
	std::vector<std::string> configs;
	for (const auto& entry : std::filesystem::directory_iterator(*options.wg_config_path))
	{
		std::string path = entry.path().filename().generic_string();

#ifdef WIN32
		if (hasEnding(path, ".conf.dpapi"))
			configs.push_back(path.substr(0, path.length() - 11));
#else
		if (hasEnding(v, ".conf"))
			result.push_back(v.substr(0, v.length() - 5));
#endif
	}

	return configs;
}

std::string WireguardManagerLib::WireguardManager::get_wg_config(const std::string& interface_name)
{
	auto path = std::filesystem::path(*options.wg_config_path);
	path /= interface_name + ".conf"; // concat...

	std::ifstream file(path.generic_string());
	std::stringstream buffer;
	buffer << file.rdbuf();

	return buffer.str();
}


std::string exec(const char* cmd) {
	std::array<char, 128> buffer;
	std::string result;

#ifdef WIN32
	std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
#else
	std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
#endif
	if (!pipe) {
		throw std::runtime_error("popen() failed!");
	}
	while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
		result += buffer.data();
	}
	return result;
}
