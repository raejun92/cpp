#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& reference) {
	std::cout << "Copy constructor called\n";
	*this = reference;
}

Fixed& Fixed::operator=(const Fixed& reference) {
	std::cout << "Assignation operator called\n";
	value = reference.value;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called\n";
	this->value = value << bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called\n";
	this->value = (int)roundf(value * (1 << bits));
}

float Fixed::toFloat() const {
	return (float)value / (1 << bits);
}

int Fixed::toInt() const {
	return value >> bits;
}

std::ostream& operator << (std::ostream& output, const Fixed& fixed) {
	output << fixed.toFloat();
	return output;
}