#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	void takeDamage(unsigned int amount);
	void guardGate();
	private:
	int guardStatus;
};

#endif