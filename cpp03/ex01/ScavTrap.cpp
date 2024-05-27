#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) {
	std::cout << "scavtrap constructor called" << std::endl;
	name = _name;
	hp = 100;
	energy = 50;
	damage = 20;
	keeper_mode = 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "scavtrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "scavtrap Copy constructor called" << std::endl;
	name = obj.name;
	hp = obj.hp;
	energy = obj.energy;
	damage = obj.damage;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &obj) {
	std::cout << "scavtrap Copy assignment operator called" << std::endl;
	if (this != &obj) {
		name = obj.name;
		hp = obj.hp;
		energy = obj.energy;
		damage = obj.damage;
	}
	return *this;
}

void ScavTrap::guardGate() {
	if (keeper_mode)
		std::cout << name << " Gate keeper mode." << std::endl;
	else
		std::cout << name << " not Gate keeper mode." << std::endl;
}