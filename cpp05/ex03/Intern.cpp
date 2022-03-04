#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(Intern &reference) {
	*this = reference;
}

Intern& Intern::operator=(Intern &reference) {
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target) {
	std::string forms[3] = {"shrubbery request", "robotomy request", "presidential request"};
	int index = -1;
	Form *form;

	while (++index < 3 && name.compare(forms[index])) {}

	switch (index) {
		case 0:
			std::cout << "Intern creates ShrubberyCreationForm\n";
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			std::cout << "Intern creates RobotomyRequestForm\n";
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern creates PresidentialPardonForm\n";
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Wrong form\n";
			form = NULL;
	}
	return form;
}