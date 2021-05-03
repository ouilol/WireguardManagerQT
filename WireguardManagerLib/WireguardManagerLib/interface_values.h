#pragma once

#include <string>
#include <map>
#include <vector>

namespace WireguardManagerLib
{
	class interface_values : public std::map<std::string, std::string>
	{
	public:

		const std::string& get_name()const
		{
			return name;
		}
		void set_name(std::string&& new_name)
		{
			name = std::move(new_name);
		}

		const std::vector<interface_values>& get_peers()const
		{
			return peers;
		}
		std::vector<interface_values>& get_peers()
		{
			return peers;
		}

	private:

		std::string name;

		std::vector<interface_values> peers;
	};

}
