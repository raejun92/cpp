#include "Karen.hpp"

Karen::Karen() {
	this->ptr[0] = &Karen::debug;
	this->ptr[1] = &Karen::info;
	this->ptr[2] = &Karen::warning;
	this->ptr[3] = &Karen::error;
}

void Karen::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error() {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level) {
	std::string cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	while (++index < 4 && level.compare(cmd[index])){}

	switch (index) {
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems\n";
	}
}