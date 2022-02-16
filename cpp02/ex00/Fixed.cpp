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
	value = reference.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}