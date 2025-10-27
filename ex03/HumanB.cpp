#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name),_weapon(NULL) {
	std::cout << _name << " is born without Weapon" << std::endl;
}

HumanB::HumanB(const std::string name, Weapon &weapon) : _name(name),_weapon(&weapon) {
	std::cout << _name << " is born with Weapon" << std::endl;
}

HumanB::~HumanB() {
	std::cout << _name << " died" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() {
	if (!_weapon)
		std::cout << "no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
