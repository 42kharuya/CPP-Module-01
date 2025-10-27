#ifndef _HUMANB_H_
#define _HUMANB_H_

#include "Weapon.hpp"

class HumanB
{
	private:
	 std::string _name;
	 Weapon	*_weapon;

	public:
	 HumanB(const std::string name);
	 HumanB(const std::string name, Weapon &weapon);
	 ~HumanB();
	 void setWeapon(Weapon &weapon);
	 void attack();

};

#endif // _HUMANB_H_
