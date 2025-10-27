#ifndef _HUMANA_H_
#define _HUMANA_H_

#include "Weapon.hpp"

class HumanA
{
	private:
	 std::string _name;
	 Weapon	&_weapon;

	public:
	 HumanA(const std::string name, Weapon &weapon);
	 ~HumanA();
	 void attack();

};

#endif // _HUMANA_H_
