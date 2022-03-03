#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &reference);
		Bureaucrat& operator=(const Bureaucrat &reference);
		std::string getName() const;
		int getGrade() const;
		class GradeTooHighException : public std::runtime_error {
			public:
				GradeTooHighException(std::string message="Grade is less than 1") : std::runtime_error(message) {}
		};
		class GradeTooLowException : public std::runtime_error {
			public:
				GradeTooLowException(std::string message="Grade is more than 150") : std::runtime_error(message) {}
		};
		void increaseGrade(int number);
		void decreaseGrade(int number);
		void signForm(Form &form);

	private:
		std::string name;
		int grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureacrat);

#endif