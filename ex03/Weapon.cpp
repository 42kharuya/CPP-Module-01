#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name) {
	std::cout << _type << " is created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << _type << " is destroyed" << std::endl;
}

const std::string &Weapon::getType(void) {
	return _type;
}

void Weapon::setType(const std::string &type) {
	_type = type;
}
