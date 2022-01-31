#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

class Karen {
	private:
	void (Karen::*ptr[4])();
	void debug();
	void info();
	void warning();
	void error();
	public:
	void complain(std::string level);
	Karen();
};

#endif