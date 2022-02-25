#include "ScavTrap.hpp"

int main() {
	ScavTrap anonymous;
	ScavTrap juchoi("juchoi");
	ScavTrap copyJuchoi(juchoi);
	
	anonymous = juchoi;
	juchoi.attack("ENEMY");
	juchoi.takeDamage(30);
	juchoi.beRepaired(20);
	juchoi.takeDamage(30);
	juchoi.guardGate();
	juchoi.takeDamage(70);
	juchoi.takeDamage(70);
	juchoi.takeDamage(40);

	return 0;
}