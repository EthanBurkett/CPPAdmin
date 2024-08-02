#pragma once
#include <unordered_map>
#include <string>
using namespace std;

enum Commands {
	SAY,
	SAYTEAM,
	JOIN,
	LEAVE
};
unordered_map<string, int> commands = {
	{"say", SAY},
	{"sayteam", SAYTEAM},
	{"J", JOIN},
	{"Q", LEAVE}
};