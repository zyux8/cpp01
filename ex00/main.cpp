#include "Zombie.hpp"

int main() {
	Zombie *zb;
	Zombie *zb1;
	Zombie *zb2;
	Zombie *zb3;

	zb = newZombie("BoB");
	zb1 = newZombie("BoberT");
	zb2 = newZombie("BobtuS");
	zb3 = newZombie("Bobek");
	std::cout << std::endl;
	zb->announce();
	zb1->announce();
	zb2->announce();
	zb3->announce();
	std::cout << std::endl;
	delete zb;
	delete zb1;
	delete zb2;
	delete zb3;
	std::cout << std::endl;
	randomChump("FreD");
	std::cout << std::endl;
	randomChump("FredeK");
	std::cout << std::endl;
	randomChump("FreduS");
	std::cout << std::endl;
	randomChump("FredaL");
	return 0;
}
