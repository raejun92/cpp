#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* ptrZombie = new Zombie(name);

	return ptrZombie;
}