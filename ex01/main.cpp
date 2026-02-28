#include "Zombie.hpp"

int main() {
	int x = 4;
	Zombie* zb = zombieHorde(x, "BoB");

	for (int y = 0; y < x; y++) {
		zb[y].announce();
	}
	delete[] zb;
	return 0;
}
