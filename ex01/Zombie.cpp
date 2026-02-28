#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Random Zombie constructer called" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << ":\t\tZombie destructer called" << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << this->name << ":\t\tZombie constructer called" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name << ":\t\tBraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

std::string Zombie::getName(void) {
	return this->name;
}
