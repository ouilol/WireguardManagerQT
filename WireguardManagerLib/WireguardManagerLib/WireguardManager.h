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

		std::vector<interface_values> wg_show();

		interface_values wg_show(const std::string& interface_name);

		void add_interface(const std::string& name, const std::string& config);

		std::vector<std::string> get_wg_config_file_names();

		std::string get_wg_config(const std::string& interface_name);


		WireguardManagerOptions& get_options()
		{
			return options;
		}
	private:

		std::vector<std::string> query_wg_raw();

		WireguardManagerOptions options;
	};

}
