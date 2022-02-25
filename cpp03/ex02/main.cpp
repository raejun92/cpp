#include "FragTrap.hpp"

int main() {
	FragTrap anonymous;
	FragTrap juchoi("juchoi");
	FragTrap copyJuchoi(juchoi);
	
	anonymous = juchoi;
	juchoi.attack("ENEMY");
	juchoi.takeDamage(30);
	juchoi.beRepaired(20);
	juchoi.takeDamage(30);
	juchoi.takeDamage(60);
	juchoi.takeDamage(10);
	juchoi.highFivesGuys();

	return 0;
}