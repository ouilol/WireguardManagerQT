#pragma once

#include <optional>
#include <string>

namespace WireguardManagerLib
{

	struct WireguardManagerOptions
	{
	public:
		std::optional<std::string> wg_path;
	};

}