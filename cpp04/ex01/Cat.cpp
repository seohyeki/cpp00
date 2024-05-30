#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Hi Cat!" << std::endl;
	type = "cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Goodbye Cat!" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &obj) {
	type = obj.type;
}

Cat& Cat::operator = (const Cat &obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "meawoooooo" << std::endl;
}