#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <cmath>

class Converter {
	public:
		Converter();
		Converter(std::string input);
		~Converter();
		Converter(Converter& reference);
		Converter& operator=(Converter& reference);
		void inputToChar();
		void inputToInt();
		void inputToFloat();
		void inputToDouble();
		class NonDisplayException : public std::runtime_error {
			public:
				NonDisplayException(std::string message="Non displayable") : std::runtime_error(message) {}
		};
		class ImpossibleException : public std::runtime_error {
			public:
				ImpossibleException(std::string message="impossible") : std::runtime_error(message) {}
		};
		class NanfException : public std::runtime_error {
			public:
				NanfException(std::string message="nanf") : std::runtime_error(message) {}
		};
		class PositiveInffException : public std::runtime_error {
			public:
				PositiveInffException(std::string message="+inff") : std::runtime_error(message) {}
		};
		class NegativeInffException : public std::runtime_error {
			public:
				NegativeInffException(std::string message="-inff") : std::runtime_error(message) {}
		};
		class NanException : public std::runtime_error {
			public:
				NanException(std::string message="Nan") : std::runtime_error(message) {}
		};
		class PositiveInfException : public std::runtime_error {
			public:
				PositiveInfException(std::string message="+inf") : std::runtime_error(message) {}
		};
		class NegativeInfException : public std::runtime_error {
			public:
				NegativeInfException(std::string message="-inf") : std::runtime_error(message) {}
		};
		void runConvert();
	
	private:
	std::string input; // 입력받은 문자
	bool isChar; // true면 문자, false면 숫자, default 숫자
	double standard; // atof는 double 리턴, isnan과 isinnf는 double 매개변수
	bool isNan;
	bool isInff;
};

#endif