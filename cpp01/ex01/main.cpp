#include "Zombie.hpp"

int main() {
	Zombie* zombies = zombieHorde(3, "zombie");

	for (int i = 0; i < 3; i++)
		zombies[i].announce();

	delete[] zombies;
	return (0);
}