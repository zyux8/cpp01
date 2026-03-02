#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	Weapon::setType(type);
	std::cout << "Weapon constructer called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructer called" << std::endl;
}

const std::string& Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
