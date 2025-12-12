#include "Kud.h"

// Kud Function Definitions
// calculateLevel: Returns Kud's level based off current experience points
int Kud::calculateLevel(int experience) {
	int calculated_level = 0;
	int subtrahend = 10;
	while (experience > 0) {
		experience -= subtrahend;
		if (experience >= 0) {
			calculated_level += 1;
		}
		subtrahend += 2;
	}
	return calculated_level;
}

// Default Constructor for Kud
Kud::Kud() {
	hp = 10;
	level = 1;
	experience = 10;
}

// Parameterized Constructor for Kud
Kud::Kud(int _hp, int _exp) {
	hp = _hp;
	level = calculateLevel(_exp);
	experience = _exp;
}

// Destructor for Kud
Kud::~Kud() {
	// Leave empty for now, nothing being dynamically allocated yet
	std::cout << "Kud deleted from computer memory! (Kud destroyed!)" << std::endl;
}

// getHp(): gets Kud's current hp
int Kud::getHp() {
	return hp;
}

// getLevel(): gets Kud's current level
int Kud::getLevel() {
	return level;
}

// getExperience(): gets Kud's current experience
int Kud::getExperience() {
	return experience;
}
