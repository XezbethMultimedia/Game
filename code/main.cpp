#include <iostream>
#include "data.h"
#include "things.h"

void inputs(Player player) {
	Commands command;
	std::string input;

	std::cout << "What do you want to do?: ";
	std::cin >> input;
	command = stringToCommand[input];

	switch (command) {
	case 0:
		player.move(player);
		break;
	}
}

int main() {
	std::cout << "Hello World!\n";
	return 0;
}