#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;

	Zombie* newZombies = new Zombie[N];
	for (int x = 0; x < N; x++) {
		newZombies[x].setName(name);
	}
	return newZombies;
}