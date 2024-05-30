#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
}

WrongAnimal::~WrongAnimal() {
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	type = obj.type;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout  << " " << std::endl;
}
