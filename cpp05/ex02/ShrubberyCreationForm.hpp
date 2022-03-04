#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& reference);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& reference);
		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif
