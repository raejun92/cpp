#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", false, 72, 45), target("undefined") {
	
}
		
RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", false, 72, 45), target(target) {

}
RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& reference)
: target(reference.target) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& reference) {
	if (this != &reference) {
		Form::operator=(reference);
		target = reference.target;
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned() == false) {
		throw SignFalseException();
	}
	if (executor.getGrade() > getExecuteGrade()) {
		throw GradeTooLowException();
	}
	std::cout << "drill~~~~ " << std::endl;
	std::srand(std::time(NULL));
	if (rand() % 2!= 0) {
		std::cout << target << " has been robotomized successfully\n";
	} else {
		std::cout << target << " failed\n";
	}
}