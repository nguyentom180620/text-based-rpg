#pragma once

// Includes
#include <iostream>
#include <string>

// Kud (Main Character) class
class Kud {
	int hp;
	int level;
	int experience;
	int calculateLevel(int experience);
public:
	// Big Three of OOP
	Kud();
	Kud(int _hp, int _exp);
	~Kud();
	// Getter Functions
	int getHp();
	int getLevel();
	int getExperience();
};
