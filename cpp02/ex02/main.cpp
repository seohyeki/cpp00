#include "Fixed.hpp"

int main() {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c(1);
	Fixed		d(3);

	std::cout << "====================================" << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;

	std::cout << "====================================" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}