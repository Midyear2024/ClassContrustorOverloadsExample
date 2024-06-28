#include "Weapon.h"

Weapon::Weapon() : Weapon("SomeWeapon",0, 0)
{
}

Weapon::Weapon(std::string weaponType, int damage, float durability) : weaponType{ weaponType }, damage { damage }, durability{ durability }
{
}

Weapon::~Weapon()
{

}

std::ostream& operator<<(std::ostream& os, const Weapon weapon)
{
	os << "Weapon Type :" << weapon.weaponType << " DMG: " << weapon.damage << " DUR: " << weapon.durability << std::endl;
	return os;
}
