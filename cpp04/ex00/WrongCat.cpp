#include "WrongCat.hpp"

WrongCat::WrongCat() {
}

WrongCat::~WrongCat() {
}

WrongCat::WrongCat(const WrongCat &obj) {
	type = obj.type;
}

WrongCat& WrongCat::operator = (const WrongCat &obj) {
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}
