#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	w->makeSound();

	delete meta;
	delete j;
	delete i;
	delete w;

	return 0;
}