#include "Fixed.hpp"

int main() {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	std::cout << "=====Fixed a value=====" << std::endl << a.getRawBits() << std::endl;
	std::cout << "=====Fixed b value=====" << std::endl << b.getRawBits() << std::endl;
	std::cout << "=====Fixed c value=====" << std::endl << c.getRawBits() << std::endl;

	b.setRawBits(42);
	c = b;

	std::cout << "=====Fixed a value=====" << std::endl << a.getRawBits() << std::endl;
	std::cout << "=====Fixed b value=====" << std::endl << b.getRawBits() << std::endl;
	std::cout << "=====Fixed c value=====" << std::endl << c.getRawBits() << std::endl;

	return 0;
}