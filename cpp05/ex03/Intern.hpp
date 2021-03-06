#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(Intern& reference);
		Intern& operator=(Intern &reference);
		Form* makeForm(std::string name, std::string target);
};

#endif