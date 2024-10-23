#pragma once

#include <iostream>
#include <map>

struct Vector2 { int x, y; };

enum Commands {move, attack, commands, stop};
enum Movement {N, E, S, W};

std::map<std::string, Commands> stringToCommand =
{
	{"move", move},
	{"attack", attack},
	{"commands", commands},
	{"stop", stop}
};

std::map<char, Movement> charToMovement =
{
	{'n', N},
	{'e', E},
	{'s', S},
	{'w', W}
};