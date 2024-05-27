#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
			int	keeper_mode;
	public:
			ScavTrap();
			ScavTrap(std::string _name);
			~ScavTrap();
			ScavTrap(const ScavTrap &obj);
			ScavTrap& operator = (const ScavTrap &obj);
			void guardGate();
};

#endif