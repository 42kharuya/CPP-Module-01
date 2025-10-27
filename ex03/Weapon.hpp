#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>
#include <string>

class Weapon
{
	private:
	 std::string _type;

	public:
	 Weapon(std::string name);
	 ~Weapon();
	 const std::string &getType(void);
	 void setType(const std::string &type);
};

#endif // _WEAPON_H_
