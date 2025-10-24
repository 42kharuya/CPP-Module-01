#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("James");
	zombie->announce();
	delete zombie;
	randomChump("Mike");
}
