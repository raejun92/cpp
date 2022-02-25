#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	guardStatus = 0;
	std::cout << "ScavTrap " << name << " default contructor\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroy\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	guardStatus = 0;
	std::cout << "ScavTrap " << name << " contructor\n";	
}

ScavTrap::ScavTrap(const ScavTrap& reference) : ClapTrap(reference) {
	std::cout << "ScavTrap " << name << " copy contructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& reference) {
	ClapTrap::operator=(reference);
	guardStatus = reference.guardStatus;
	std::cout << "ScavTrap " << name << " assignation operator contructor\n";
	return *this;
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (guardStatus == 1) {
		std::cout << "ScavTarp " << name << " save " << amount << " hitPoint\n";
		std::cout << "ScavTrap " << name << " has " << hitPoint << " hitPoint left\n";
		guardStatus = 0;
		return;
	}
	if (hitPoint <= 0) {
		std::cout <<"ScavTrap " << name << " is already died\n";
		return;
	}
	std::cout << "ScavTrap " << name << " take Damege of " << amount << std::endl;
	hitPoint -= amount;
	if (hitPoint > 0) {
		std::cout << "ScavTrap " << name << " has " << hitPoint << " hitPoint left\n";
	} else {
		std::cout << "ScavTrap " << name << " die\n";
	}
}

void ScavTrap::guardGate() {
	if (hitPoint <= 0 || energyPoint < 50) {
		return;
	}
	guardStatus = 1;
	energyPoint -= 50;
	std::cout << "ScavTrap " << name << " use guardGate\n";
}