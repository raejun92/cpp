#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("undefined"), grade(150) {
	std::cout << "Bureaucrat default constructor\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	} else {
		std::cout << "Bureaucrat constructor\n";
	}
}
		
Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destroy\n";
}
		
Bureaucrat::Bureaucrat(const Bureaucrat &reference) : name(reference.name), grade(reference.grade) {
	std::cout << "Bureaucrat copy constructor\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &reference) {
	if (this == &reference) {
		return *this;
	} else {
		grade = reference.grade;
	}
	std::cout << "Bureaucrat assignation operator contructor\n";
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increaseGrade(int number) {
	if (grade - number < 1) {
		throw GradeTooHighException();
	} else {
		grade -= number;
	}
}

void Bureaucrat::decreaseGrade(int number) {
	if (grade + number > 150) {
		throw GradeTooLowException();
	} else {
		grade += number;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureacrat) {
	out << bureacrat.getName() << "bureacrat grade " << bureacrat.getGrade() << std::endl;
	return out;
}