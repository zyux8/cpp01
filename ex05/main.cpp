#include "Harl.hpp"

int main() {
	std::string input;
	Harl harl;

	do {
		std::cout << "Level: ";
		std::getline(std::cin, input);
		if (input != "BYE")
			harl.complain(input);
		else {
			std::cout << "Bring me bacon when ur back!" << std::endl; 
			return 0;
		}
	} while (1);

	// while (std::getline(std::cin, input)) {
	// 	if (input != "BYE")
	// 		harl.complain(input);
	// 	else {
	// 		std::cout << "Bring me bacon when ur back!" << std::endl; 
	// 		return 0;
	// 	}
	// }
	// return 0;
}
