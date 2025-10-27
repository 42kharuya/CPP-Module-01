#ifndef _HUMANB_H_
#define _HUMANB_H_

#include "Weapon.hpp"

class HumanB
{
	private:
	 std::string _name;
	 Weapon	_weapon;

	public:
	 HumanB();
	 ~HumanB();
	 void attack();

};

#endif // _HUMANB_H_
