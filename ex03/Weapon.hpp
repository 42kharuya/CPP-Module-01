#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>
#include <string>

class Weapon
{
	private:
	 std::string _name;

	public:
	 Weapon(std::string name);
	 ~Weapon();
	 std::string getType();
	 void	setType(std::string name);
};

#endif // _WEAPON_H_
