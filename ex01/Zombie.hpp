#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>
#include <string>

class Zombie
{
	private:
	 std::string _name;

	public:
	 Zombie();
	 Zombie(std::string name);
	 ~Zombie();
	 void setName(std::string name);
	 void announce(void);
};

Zombie* zombieHorde( int N, std:: string name );

#endif // _ZOMBIE_H_
