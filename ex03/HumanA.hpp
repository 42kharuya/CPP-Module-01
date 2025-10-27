#ifndef _HUMANA_H_
#define _HUMANA_H_

#include "Weapon.hpp"

class HumanA
{
	private:
	 std::string _name;
	 Weapon	_weapon;

	public:
	 HumanA();
	 HumanA(Weapon Weapon);
	 ~HumanA();
	 void attack();

};

#endif // _HUMANA_H_
