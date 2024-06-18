#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource {
	public:
			IMateriaSource();
			~IMateriaSource();
			IMateriaSource(const IMateriaSource &ret);
			IMateriaSource& operator = (const IMateriaSource &ret);
			virtual ~IMateriaSource() {}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif