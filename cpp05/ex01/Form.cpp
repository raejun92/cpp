#include "Form.hpp"

Form::Form() : name("undefined"), isSigned(false), signGrade(10), executeGrade(100) {
	std::cout << "Form default constructor\n";
}

Form::Form(std::string name, bool isSigned, int signGrade, int executeGrade)
: name(name), isSigned(isSigned), signGrade(signGrade), executeGrade(executeGrade) {
	if (signGrade < 1 || executeGrade < 1) {
		throw GradeTooHighException();
	} else if (signGrade > 150 || executeGrade > 150) {
		throw GradeTooLowException();
	}
	std::cout << "Form constructor\n";
}

Form::~Form() {
	std::cout << "Form destroy\n";
}

Form::Form(Form &reference) : name(reference.name), isSigned(reference.isSigned), 
signGrade(reference.signGrade), executeGrade(reference.executeGrade) {
	std::cout << "Form copy constructor\n";
}

Form& Form::operator=(Form &reference) {
	if (this != &reference) {
		isSigned = reference.isSigned;
	}
	std::cout << "Form assignation operator contructor\n";
	return *this;
}

std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecuteGrade() const {
	return executeGrade;
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	out << form.getName() << " form isSigned " << form.getIsSigned() 
	<< ", signGrade " << form.getSignGrade() << ", executeGrade " 
	<< form.getExecuteGrade() << std::endl;
	return out;
}

bool Form::beSigned(Bureaucrat &bureaucrat) {
	if (isSigned == true) {
		std::cout << "Already signed\n";
		return false;
	}
	if (bureaucrat.getGrade() > signGrade) {
		throw SignFalseException();
	}
	isSigned = true;
	return true;
}