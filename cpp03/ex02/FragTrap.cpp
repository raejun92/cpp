#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap() {
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " default contructor\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroy\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " contructor\n";
}

FragTrap::FragTrap(const FragTrap& reference) : ClapTrap(reference) {
	std::cout << "FragTrap " << name << " copy contructor\n";
}

FragTrap& FragTrap::operator=(const FragTrap& reference) {
	ClapTrap::operator=(reference);
	std::cout << "FragTrap " << name << " assignation operator contructor\n";
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " want to eat hi five guys\n";
}