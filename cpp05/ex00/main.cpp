#include "Bureaucrat.hpp"

int main() {
	{
		// 정상
		try {
			Bureaucrat kim("kim", 2);
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// 증가
		try {
			Bureaucrat lee("lee", 10);
			std::cout << lee;
			lee.increaseGrade(3);
			std::cout << lee;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// 감소
		try {
			Bureaucrat choi("choi", 6);
			std::cout << choi;
			choi.decreaseGrade(2);
			std::cout << choi;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// 선언 오류
		try {
			Bureaucrat shin("shin", 0);
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// 감소 오류
		try {
			Bureaucrat park("park", 100);
			std::cout << park;
			park.decreaseGrade(100);
			std::cout << park;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		// 증가 오류
		try {
			Bureaucrat song("song", 100);
			std::cout << song;
			song.increaseGrade(100);
			std::cout << song;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return 0;
}