#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int fixed) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(fixed);
}

Fixed::Fixed(const float fixed) {
	std::cout << "Float constructor called" << std::endl;
	setRawBits(fixed);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	value = fixed.value;
}

Fixed& Fixed::operator=(Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}