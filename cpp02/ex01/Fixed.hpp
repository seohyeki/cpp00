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
			Fixed& operator = (Fixed &fixed);
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
};

#endif