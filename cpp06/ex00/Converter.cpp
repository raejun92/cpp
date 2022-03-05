#include "Converter.hpp"

Converter::Converter() {
	
}

Converter::Converter(std::string input) : input(input), isChar(false), standard(0), isNan(false), isInff(false) {
	if (input.length() == 1 && !isdigit(input.at(0))) {
		isChar = true;
	}
	standard = atof(input.c_str());
	isNan = isnan(standard);
	isInff = isinf(standard);
}

Converter::~Converter() {

}

Converter::Converter(Converter& reference) {
	*this = reference;
}

Converter& Converter::operator=(Converter& reference) {
	if (this != &reference) {
		input = reference.input;
		isChar = reference.isChar;
		standard = reference.standard;
		isNan = reference.isNan;
		isInff = reference.isInff;
	}
	return *this;
}

void Converter::inputToChar() {
	try {
		std::cout << "char: ";
		if (isChar == true) {
			// 출력 가능한 범위 32 ~ 126
			if (input.at(0) < 32 || input.at(0) > 126) {
				throw NonDisplayException();
			}
			std::cout << input << std::endl;
		} else {
			if (standard < 0 || standard > 255 || isNan == true || isInff == true) {
				throw ImpossibleException();
			}
			if (standard < 32 || standard > 126) {
				throw NonDisplayException();
			}
			std::cout << static_cast<char>(standard) << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Converter::inputToInt() {
	try {
		std::cout << "int: ";
		if (isChar == true) {
			std::cout << static_cast<int>(input.at(0)) << std::endl;
		} else {
			if (isNan == true || isInff == true || standard > INT_MAX || standard < INT_MIN) {
				throw ImpossibleException();
			}
			std::cout << static_cast<int>(standard) << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Converter::inputToFloat() {
	try {
		float f;
		std::cout << "float: ";
		if (isChar == true) {
			f = static_cast<float>(input.at(0));
		} else {
			if (isNan == true) {
				throw NanfException();
			} else if (isInff == true && standard > 0) {
				throw PositiveInffException();
			} else if (isInff == true && standard < 0) {
				throw NegativeInffException();
			}
			f = static_cast<float>(standard);
		}
		if (f - static_cast<int>(f) == 0) {
			std::cout << f << ".0f\n";
		} else {
			std::cout << f << "f\n";
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Converter::inputToDouble() {
	try {
		double d;
		std::cout << "double: ";
		if (isChar == true) {
			d = static_cast<double>(input.at(0));
		} else {
			if (isNan == true) {
				throw NanException();
			} else if (isInff == true && standard > 0) {
				throw PositiveInfException();
			} else if (isInff == true && standard < 0) {
				throw NegativeInfException();
			}
			d = static_cast<double>(standard);
		}
		if (d - static_cast<int>(d) == 0) {
			std::cout << d << ".0\n";
		} else {
			std::cout << d << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Converter::runConvert() {
	inputToChar();
	inputToInt();
	inputToFloat();
	inputToDouble();
}