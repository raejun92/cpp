#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
	int value;
	static const int bits = 8;
	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& reference);
	Fixed& operator = (const Fixed& reference);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	Fixed(const int value);
	Fixed(const float value);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator << (std::ostream& output, const Fixed& fixed);

#endif