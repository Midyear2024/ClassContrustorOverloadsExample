#pragma once
#include <iostream>
#include <string.h>
class Weapon {

public: 
	
	Weapon();
	
	Weapon(std::string weaponType, int damage, float durability);

	
	Weapon(const Weapon& other) = default;
	
	Weapon& operator= (const Weapon& other) = default;
	
	friend std::ostream& operator<<(std::ostream& os, const Weapon weapon);
	~Weapon();
private:
	int damage;
	float durability; //value between 0 - 100%
	std::string weaponType;
};