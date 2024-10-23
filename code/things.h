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

class Player : public Entity {
public:
	Entity move(Entity entity) {
		Movement movement;
		char input;

		std::cout << "Which direction?(n/e/s/w): ";
		std::cin >> input;
		movement = charToMovement[input];

		switch (movement) {
		case 0:
			entity.location.x += 1;
			break;
		case 1:
			entity.location.y += 1;
			break;
		}
	}
};