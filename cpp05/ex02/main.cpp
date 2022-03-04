#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		ShrubberyCreationForm sform("sform");
		RobotomyRequestForm rform("rform");
		PresidentialPardonForm pform("pform");

		Bureaucrat b1("b1", 1);
		b1.signForm(sform);
		b1.signForm(rform);
		b1.signForm(pform);
		b1.executeForm(sform);
		b1.executeForm(rform);
		b1.executeForm(pform);

		// Bureaucrat b2("b2", 10);
		// b2.signForm(sform);
		// b2.signForm(rform);
		// b2.signForm(pform);
		// b2.executeForm(sform);
		// b2.executeForm(rform);
		// b2.executeForm(pform);

	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}