#include "Brain.hpp"

Brain::Brain() {
	ideas = "this is brain";
}

Brain::~Brain() {
}

Brain::Brain(const Brain &obj) {
	ideas = obj.ideas;
}

Brain& Brain::operator = (const Brain &obj) {
	if (this != &obj) {
		ideas = obj.ideas;
	}
	return *this;
}
