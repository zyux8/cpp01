#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	std::cout << "HumanB constructor called" << std:: endl;
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	if (!this->weapon)
		std::cout << this->name << " attacks with their fists" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
