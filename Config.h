#pragma once

#include <string>
#include <jansson.h>

struct Config {
	const char* games_mp;
	const char* api_key;
};

struct Config get_config();