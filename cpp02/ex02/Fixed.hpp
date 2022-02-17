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
	bool operator > (const Fixed& fixed);
	bool operator < (const Fixed& fixed);
	bool operator >= (const Fixed& fixed);
	bool operator <= (const Fixed& fixed);
	bool operator == (const Fixed& fixed);
	bool operator != (const Fixed& fixed);
	Fixed operator + (const Fixed& reference);
	Fixed operator - (const Fixed& reference);
	Fixed operator * (const Fixed& reference);
	Fixed operator / (const Fixed& reference);
	Fixed& operator ++ ();
	Fixed& operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);
	static Fixed& min(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
};

std::ostream& operator << (std::ostream& output, const Fixed& fixed);

#endif