#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "[fragtrap] default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) {
	std::cout << "[fragtrap] constructor called" << std::endl;
	name = _name;
	hp = 100;
	energy = 100;
	damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "[fragtrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "[fragtrap] Copy constructor called" << std::endl;
	name = obj.name;
	hp = obj.hp;
	energy = obj.energy;
	damage = obj.damage;
}

FragTrap& FragTrap::operator = (const FragTrap &obj) {
	std::cout << "[fragtrap] Copy assignment operator called" << std::endl;
	if (this != &obj) {
		name = obj.name;
		hp = obj.hp;
		energy = obj.energy;
		damage = obj.damage;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "[fragtrap.highFivesGuys] high fives!?" <<std::endl;
}