#pragma once
#include "Weapon.h"
#include <iostream>
#include <string.h>


class Character {

public:
	
	Character();
	Character(std::string name, int health, int speed, int defence, Weapon* weapon);
	Character(const Character& other);
	Character& operator=(const Character& other);


	~Character();
	
	friend std::ostream& operator<<(std::ostream& os, const Character character);

private:
	int health;
	int speed;
	int defence;
	std::string name;
	
	Weapon* weapon;
};