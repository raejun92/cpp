#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	{
		// form 정상
		try {
			Form a("a", false, 1, 1);
			std::cout << a;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

	}
	{
		// form signGrade 오류
		try {
			Form b("b", false, 151, 1);
			std::cout << b;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// form executeGrade 오류
		try {
			Form c("c", false, 1, 0);
			std::cout << c;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// sign 동작
		try {
			Bureaucrat bu("bu", 100);
			Form form1("form1", false, 110, 20);
			Form form2("form2", false, 80, 59);
			
			bu.signForm(form1);
			bu.signForm(form1);
			bu.signForm(form2);
			
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	return 0;
}