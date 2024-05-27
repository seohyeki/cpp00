#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int fixed) {
	std::cout << "Int constructor called" << std::endl;
	value = fixed << bits;
}

Fixed::Fixed(const float fixed) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(fixed * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	value = fixed.value;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (value);
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

float Fixed::toFloat(void) const {
	float ret;

	ret = value;
	ret = ret / (1 << bits);
	return (ret);
}

int Fixed::toInt(void) const {
	return (value >> bits);
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}