#pragma once

#include <vector>

#include "interface_values.h"
#include "WireguardManagerOptions.h"

namespace WireguardManagerLib {

	class WireguardManager
	{
	public:
		WireguardManager(const WireguardManagerOptions& options)
		{
			this->options = options;
		}

		void initialize();

		std::vector<interface_values>&& query_wg();

	private:

		std::vector<std::string>&& query_wg_raw();

		WireguardManagerOptions options;
	};

}
