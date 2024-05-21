#include "Zombie.hpp"

int main() {
	Zombie stack("stack zombie");
	Zombie *heap = newZombie("heap zombie");

	randomChump("random chump zombie");
	stack.announce();
	heap->announce();
	delete heap;
	return (0);
}