#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		~Form();
		Form(std::string name, bool isSinged, int signGrade, int executeGrade);
		Form(Form &reference);
		Form& operator=(Form &reference);
		class GradeTooHighException : public std::runtime_error {
			public:
				GradeTooHighException(std::string message="Grade is less than 1") : std::runtime_error(message) {}
		};
		class GradeTooLowException : public std::runtime_error {
			public:
				GradeTooLowException(std::string message="Grade is more than 150") : std::runtime_error(message) {}
		};
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool beSigned(Bureaucrat &bureaucrat);
	
	private:
		std::string name; // 문서 이름
		bool isSigned; // 문서 사인 여부
		int signGrade; // 문서에 사인할 수 있는 최소 관료 등급(최소 1)
		int executeGrade; // 문서를 실행할 수 있는 최소 관료 등급(최소 150)
};

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif