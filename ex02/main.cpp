#include <iostream>

int main() {
	std::string wow = "HI THIS IS BRIAN";
	std::string *stringPTR = &wow;
	std::string &stringREF = wow;

	std::cout << "Memory adresses:" << std::endl;
	std::cout << &wow << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl << "Values:" << std::endl;
	std::cout << wow << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}