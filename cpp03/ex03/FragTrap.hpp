#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	void attack(std::string const & target);
	void highFivesGuys(void);
};

#endif