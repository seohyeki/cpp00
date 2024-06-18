#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria {
	protected:
			/* data */
	public:
			AMateria();
			~AMateria();
			AMateria(const AMateria &ret);
			AMateria& operator = (const AMateria &ret);

			AMateria(std::string const & type);
			std::string const & getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif