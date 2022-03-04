#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm& reference);
		RobotomyRequestForm& operator=(RobotomyRequestForm& reference);
		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string target;
};

#endif