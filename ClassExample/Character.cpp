#include "Character.h"

Character::Character() : Character("Boblin", 0, 0, 0, nullptr)
{
}

Character::Character(std::string name, int health, int speed, int defence, Weapon* weapon) : name{ name },health { health }, speed{ speed }, defence{ defence }, weapon{ weapon }
{
	
}

Character::Character(const Character& other)
{
	std::cout << "Calling copy constructor" << std::endl;
	health = other.health;
	speed = other.speed;
	defence = other.defence;
	name = other.name;
	if (other.weapon != nullptr)
		weapon = new Weapon(*other.weapon);
	else
		weapon = nullptr;
	
	
}

Character& Character::operator=(const Character& other)
{
	// TODO: insert return statement here
	std::cout << "Calling assignment operator" << std::endl;
	return *this;
}

Character::~Character()
{
	delete weapon;
}

std::ostream& operator<<(std::ostream& os, const Character character)
{
	os << character.name << std::endl;
	os << "HP: " << character.health << " SPD: " << character.speed << " DEF: " << character.defence << std::endl;
	if(character.weapon != nullptr)
		os << *character.weapon;
	return os;
}
