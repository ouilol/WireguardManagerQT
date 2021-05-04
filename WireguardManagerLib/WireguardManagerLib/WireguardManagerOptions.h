#pragma once

#include <optional>
#include <string>

namespace WireguardManagerLib
{

	struct WireguardManagerOptions
	{
	public:
		std::optional<std::string> wg_path;
        std::optional<std::string> wg_config_path;
	};

}
