#include "Animal.hpp"

Animal::Animal() {
}

Animal::~Animal() {
}

Animal::Animal(const Animal &obj) {
	type = obj.type;
}

Animal& Animal::operator = (const Animal &obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	std::cout << "..." << std::endl;
}