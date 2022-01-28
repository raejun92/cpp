#include "Zombie.hpp"

int main() {
	Zombie zombie1("zombie1");
	zombie1.announce();

	Zombie* zombie2 = new Zombie("zombie2");
	zombie2->announce();

	randomChump("zombie3");
	delete zombie2;
	return (0);
}