#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);
	void attack(std::string const & target);
	void whoAmI();
	private:
	std::string name;
};

#endif