#include "Fixed.hpp"

Fixed::Fixed() {
	this->value = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& reference) {
	*this = reference;
}

Fixed& Fixed::operator=(const Fixed& reference) {
	value = reference.value;
	return *this;
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

Fixed::Fixed(const int value) {
	this->value = value << bits;
}

Fixed::Fixed(const float value) {
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

bool Fixed::operator > (const Fixed& fixed) {
	if (value > fixed.value)
		return true;
	return false;
}

bool Fixed::operator < (const Fixed& fixed) {
	if (value < fixed.value)
		return true;
	return false;
}

bool Fixed::operator >= (const Fixed& fixed) {
	if (value >= fixed.value)
		return true;
	return false;
}

bool Fixed::operator <= (const Fixed& fixed) {
	if (value <= fixed.value)
		return true;
	return false;
}

bool Fixed::operator == (const Fixed& fixed) {
	if (value == fixed.value)
		return true;
	return false;
}

bool Fixed::operator != (const Fixed& fixed) {
	if (value != fixed.value)
		return true;
	return false;
}

Fixed Fixed::operator + (const Fixed& reference) {
	Fixed calculator(this->toFloat() + reference.toFloat());
	return calculator;
}

Fixed Fixed::operator - (const Fixed& reference) {
	Fixed calculator(this->toFloat() - reference.toFloat());
	return calculator;
}

Fixed Fixed::operator * (const Fixed& reference) {
	Fixed calculator(this->toFloat() * reference.toFloat());
	return calculator;
}

Fixed Fixed::operator / (const Fixed& reference) {
	Fixed calculator(this->toFloat() / reference.toFloat());
	return calculator;
}

Fixed& Fixed::operator ++ () {
	++value;
	return *this;
}

Fixed& Fixed::operator -- () {
	--value;
	return *this;
}

Fixed Fixed::operator ++ (int) {
	Fixed tmp(*this);
	value++;
	return tmp;
}

Fixed Fixed::operator -- (int) {
	Fixed tmp(*this);
	value--;
	return tmp;
}

Fixed& Fixed::max(Fixed& first, Fixed& second) {
	if (first.value >= second.value)
		return first;
	return second;
}

 const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
	if (first.value >= second.value)
		return first;
	return second;
}

Fixed& Fixed::min(Fixed& first, Fixed& second) {
	if (first.value <= second.value)
		return first;
	return second;
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
	if (first.value <= second.value)
		return first;
	return second;
}