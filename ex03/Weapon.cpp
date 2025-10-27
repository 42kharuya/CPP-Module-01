#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _name(name) {
	std::cout << _name << "is created." << std::endl;
}

std::string Weapon::getType() {
	// この関数の役割を確認する
	return _name;
}

void Weapon::setType(std::string name) {
	_name = name;
}
