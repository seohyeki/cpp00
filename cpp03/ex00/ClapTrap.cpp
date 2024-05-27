#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	name = "default";
	hp = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap(std::string _name){
	std::cout << "constructor called" << std::endl;
	name = _name;
	hp = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "Copy constructor called" << std::endl;
	name = obj.name;
	hp = obj.hp;
	energy = obj.energy;
	damage = obj.damage;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj) {
		name = obj.name;
		hp = obj.hp;
		energy = obj.energy;
		damage = obj.damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (hp > 0 && energy > 0) {
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
		energy--;
		std::cout << "==============================================" << std::endl;
		std::cout << "ClapTrap " << name << std::endl;
		std::cout << "HP: " << hp << std::endl;
		std::cout << "ENERGY: " << energy << std::endl;
		std::cout << "==============================================" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << name << " can’t do anything" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp > 0) {
		std::cout << "ClapTrap " << name << " take damage " << amount << std::endl;
		if (hp < amount)
			hp = 0;
		else
			hp -= amount;
		std::cout << "==============================================" << std::endl;
		std::cout << "ClapTrap " << name << std::endl;
		std::cout << "HP: " << hp << std::endl;
		std::cout << "ENERGY: " << energy << std::endl;
		std::cout << "==============================================" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy > 0) {
		std::cout << "ClapTrap " << name << " be repaired " << amount << std::endl;
		energy--;
		hp += amount;
		std::cout << "==============================================" << std::endl;
		std::cout << "ClapTrap " << name << std::endl;
		std::cout << "HP: " << hp << std::endl;
		std::cout << "ENERGY: " << energy << std::endl;
		std::cout << "==============================================" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << name << " can’t do anything" << std::endl;
	}
}