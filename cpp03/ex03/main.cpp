#include "DiamondTrap.hpp"

int main() {
	DiamondTrap anonymous;
	DiamondTrap juchoi("juchoi");
	DiamondTrap copyJuchoi(juchoi);
	
	anonymous = juchoi;
	juchoi.attack("ENEMY");
	juchoi.takeDamage(30);
	juchoi.beRepaired(20);
	juchoi.takeDamage(30);
	juchoi.takeDamage(60);
	juchoi.takeDamage(10);
	juchoi.whoAmI();

	return 0;
}