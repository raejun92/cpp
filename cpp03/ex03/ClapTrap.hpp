#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;
	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif