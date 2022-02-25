#include "ClapTrap.hpp"

int main() {
	ClapTrap anonymous;
	ClapTrap juchoi("juchoi");
	ClapTrap copyJuchoi(juchoi);
	
	anonymous = juchoi;
	juchoi.attack("ENEMY");
	juchoi.takeDamage(3);
	juchoi.takeDamage(3);
	juchoi.beRepaired(2);
	juchoi.takeDamage(7);
	juchoi.takeDamage(4);

	return 0;
}