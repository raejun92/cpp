#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", false, 25, 5), target("undefined") {
	
}
		
PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", false, 25, 5), target(target) {

}
PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& reference)
: target(reference.target) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& reference) {
	if (this != &reference) {
		Form::operator=(reference);
		target = reference.target;
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned() == false) {
		throw SignFalseException();
	}
	if (executor.getGrade() > getExecuteGrade()) {
		throw GradeTooLowException();
	}
	std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
}