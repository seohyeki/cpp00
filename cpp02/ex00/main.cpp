#include <iostream>

class Fixed {
	private:
			int					value;
			static const int	bits = 8;
	public:
			Fixed();
			Fixed(const Fixed &fixed);
			Fixed& operator = (Fixed &fixed);
			~Fixed();
			int		getRawBits(void);
			void	setRawBits(int const raw);
};

Fixed::Fixed() {
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	value = fixed.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed &fixed) {
	Fixed &f = fixed;

	std::cout << "Copy assignment operator called" << std::endl;
	return (f);
}

int Fixed::getRawBits() {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}


int main() {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}