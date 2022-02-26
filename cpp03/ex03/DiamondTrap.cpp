#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	name = "anonymous";
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " default contructor\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destroy\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->name = name;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " contructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& reference) : ClapTrap(reference), ScavTrap(reference), FragTrap(reference) {
	name = reference.name;
	std::cout << "DiamondTrap " << name << " copy contructor\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& reference) {
	name = reference.name;
	ClapTrap::operator=(reference);
	std::cout << "DiamondTrap " << name << " assignation operator contructor\n";
	return *this;
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}