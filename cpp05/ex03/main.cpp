#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern i;

		Bureaucrat b("b", 1);
		Form *s = i.makeForm("shrubbery request", "sform");
		Form *r = i.makeForm("robotomy request", "rform");
		Form *p = i.makeForm("presidential request", "pform");

		b.signForm(*s);
		b.signForm(*r);
		b.signForm(*p);
		b.executeForm(*s);
		b.executeForm(*r);
		b.executeForm(*p);

	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}