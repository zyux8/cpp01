#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle" <<
		"-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t"
	<< " putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
	<< "coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int GetLevel(std::string input) {
	if (input == "DEBUG")
		return DEBUG;
	if (input == "INFO")
		return INFO;
	if (input == "WARNING")
		return WARNING;
	if (input == "ERROR")
		return ERROR;
	return -1;
}

void Harl::complain(std::string input) {
	switch (GetLevel(input)) {
		case DEBUG:
			(this->*&Harl::debug)();
			break;
		case INFO:
			(this->*&Harl::info)();
			break;
		case WARNING:
			(this->*&Harl::warning)();
			break;
		case ERROR:
			(this->*&Harl::error)();
			break;
		default:
			std::cout << "Wrong input argument..." << std::endl;
			break;
	}
}
