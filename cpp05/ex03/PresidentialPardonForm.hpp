#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm& reference);
		PresidentialPardonForm& operator=(PresidentialPardonForm& reference);
		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif