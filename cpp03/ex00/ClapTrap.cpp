#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	name = "anonymous";

	std::cout << "ClapTrap " << name << " default contructor\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroy\n";
}

ClapTrap::ClapTrap(std::string name) {
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	this->name = name;

	std::cout << "ClapTrap " << name << " contructor\n";
}

ClapTrap::ClapTrap(const ClapTrap& reference) {
	hitPoint = reference.hitPoint;
	energyPoint = reference.energyPoint;
	attackDamage = reference.attackDamage;
	name = reference.name;

	std::cout << "ClapTrap " << name << " copy contructor\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& reference) {
	hitPoint = reference.hitPoint;
	energyPoint = reference.energyPoint;
	attackDamage = reference.attackDamage;
	name = reference.name;

	std::cout << "ClapTrap " << name << " assignation operator contructor\n";
	return *this;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attack " << target 
	<< ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (energyPoint <= 0) {
		std::cout <<"ClapTrap " << name << " is already died\n";
		return;
	}
	std::cout << "ClapTrap " << name << " take Damege of " << amount << std::endl;
	energyPoint -= amount;
	if (energyPoint > 0) {
		std::cout << "ClapTrap " << name << " has " << energyPoint << " energyPoint left\n";
	} else {
		std::cout << "ClapTrap " << name << " die\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoint <= 0) {
		std::cout <<"ClapTrap " << name << " is already died\n";
		return;
	}
	energyPoint += amount;
	std::cout << "ClapTrap " << name << " has been repaired " << amount << std::endl;
	std::cout << "ClapTrap " << name << " has " << energyPoint << " energyPoint left\n";
}