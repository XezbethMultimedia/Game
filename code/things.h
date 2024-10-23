#pragma once

#include <iostream>
#include "data.h"

class Object {
public:
	Vector2 location;
	std::string name;
	int color;
};

class Entity : public Object {
public:
	int spd = 1;
	int atk = 1;
	int def = 1;
	int psi = 1;
	int hp = 5;
};