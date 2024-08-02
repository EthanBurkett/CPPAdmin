#define _CRT_SECURE_NO_WARNINGS
#include <jansson.h>
#include <string>
#include <iostream>
#include <Config.h>
#include <Windows.h>
#include <vector>

using namespace std;

struct Config get_config() {
	std::vector<wchar_t> wide_buffer(MAX_PATH);
	DWORD length = GetCurrentDirectoryW(wide_buffer.size(), wide_buffer.data());

	if (length == 0) {
		std::wcerr << L"Error retrieving current directory." << std::endl;
		exit(1);
	}
	if (length > wide_buffer.size()) {
		wide_buffer.resize(length);
		length = GetCurrentDirectoryW(wide_buffer.size(), wide_buffer.data());
	}
	int buffer_size = WideCharToMultiByte(CP_ACP, 0, wide_buffer.data(), -1, nullptr, 0, nullptr, nullptr);
	if (buffer_size == 0) {
		std::wcerr << L"Error determining size for narrow character buffer." << std::endl;
		exit(1);
	}

	std::vector<char> narrow_buffer(buffer_size);
	int result = WideCharToMultiByte(CP_ACP, 0, wide_buffer.data(), -1, narrow_buffer.data(), buffer_size, nullptr, nullptr);
	if (result == 0) {
		std::wcerr << L"Error converting wide character buffer to narrow character buffer." << std::endl;
		exit(1);
	}

	const char* working_dir = narrow_buffer.data();

	size_t config_path_len = strlen(working_dir) + strlen("/config.json") + 1;
	const char* config_path = new char[config_path_len];
	strcpy_s((char*)config_path, config_path_len, working_dir);
	strcat_s((char*)config_path, config_path_len, "/config.json");

	FILE* file = fopen(config_path, "r");
	if(!file) {
		json_t* config = json_object();
		json_object_set_new(config, "games_mp", json_string("games_mp"));
		json_object_set_new(config, "api_key", json_string("api_key"));

		json_dump_file(config, config_path, 0);

		if(file != 0) fclose(file);
	}

	json_error_t error;
	json_t* config = json_load_file(config_path, 0, &error);

	if(!config) {
		cout << "Error reading config file: " << error.text << endl;
		exit(1);
	}

	struct Config cfg {};
	
	json_t* games_mp = json_object_get(config, "games_mp");
	if(json_is_string(games_mp)) {
		cfg.games_mp = json_string_value(games_mp);
	}

	json_t* api_key = json_object_get(config, "api_key");
	if(json_is_string(api_key)) {
		cfg.api_key = json_string_value(api_key);
	}
	
	

	delete[] config_path;

	return cfg;
}