/* Project: Kud RPG
 * Description: You play as Kud, can pick a class, and fight an endless amount of monsters
 * The monsters will become infinitely more difficult as you go on, so compete with yourself or friends
 * in how far you can get. Be a mage, fusilier (gun man starting with flintlock), or a swordsman
 * Author: Tom Nguyen
 * Start Date: 12/11/2025
 * C++ Version: C++20
 *
 */

// Includes
#include <iostream>
#include <vector>
#include <string>
#include "characters/Kud/Kud.h"

// Game is mapped currently by a single Zone
// This Zone (the current game area, but might expand) will hold three Areas (that is, Zone holds areas)
// These three areas are the main Village, the forest, and the lava pit
// Areas will hold whether they have the player (to manage different avaliable sections of game later)
// Areas will also hold character lists (for village, villigers, and forest, monsters)
// After that, each one will have to have unique traits

class Character {
	int hp;
	std::string name;
public:
	// Make class abstract
	Character();
	virtual ~Character() = 0;
};

class Area {
	bool has_player;
	
};

int main(void) {
	// Greet player, allowing them to choose between three classes (mage, gun, or sword)
	std::cout << "Welcome to the Kud RPG!" << std::endl;
	std::cout << "Choose your class!" << std::endl;
	std::cout << std::endl << "1. Mage" << std::endl << "2. Fusilier" << 
		std::endl << "3. Swordsman" << std::endl;
	std::cout << std::endl << "Choose a number (1-3): ";

	int player_class_choice;

	// Parse user input, not allowing numbers out of the range
	// Undefined behavior for invalid input type (entering characters other than numbers)
	while (true) {
		std::cin >> player_class_choice;
		if (1 <= player_class_choice && player_class_choice <= 3) {
			break;
		}
		std::cout << "You entered an invalid number! Try again." << std::endl;
		std::cout << std::endl << "Choose a number (1-3): ";
	}

	std::cout << std::endl << "You have chosen ";
	switch (player_class_choice) {
		case 1:
			std::cout << "Mage!" << std::endl;
			break;
		case 2:
			std::cout << "Fusilier!" << std::endl;
			break;
		case 3:
			std::cout << "Swordsman!" << std::endl;
			break;
		default:
			std::cout << std::endl << "Uh-oh, we shouldn't be here ):" << std::endl;
			return -1;
	}
	std::cout << std::endl;

	// Spawn Kud
	Kud Kud;

	return 0;
}
