#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	private:
			int					value;
			static const int	bits = 8;
	public:
			Fixed();
			Fixed(const int fixed);
			Fixed(const float fixed);
			~Fixed();
			Fixed(const Fixed &fixed);
			Fixed& operator = (const Fixed &fixed);
			int				getRawBits(void) const;
			void			setRawBits(int const raw);
			float			toFloat(void) const;
			int				toInt(void) const;
			static	Fixed&	min(Fixed &a, Fixed &b);
			static	Fixed&	min(const Fixed &a, const Fixed &b);
			static	Fixed&	max(Fixed &a, Fixed &b);
			static	Fixed&	max(const Fixed &a, const Fixed &b);

};

std::ostream &operator << (std::ostream &out, const Fixed &fixed);

#endif