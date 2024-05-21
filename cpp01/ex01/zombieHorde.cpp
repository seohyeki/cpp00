#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde = new Zombie[N];

	std::stringstream index;
	for(int i = 0; i < N; i++) {
		index << i;
		horde[i].set_name(name + index.str());
	}
	return (horde);
}