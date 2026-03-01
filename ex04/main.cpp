#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Error invalid argument count";
		return 1;
	}

	std::ifstream src(av[1]);
	std::string newName = av[1];
	std::ofstream dest(newName.append(".replace").c_str());

	if (!src.is_open() || !dest.is_open()) {
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}

	std::string str;
	std::string find = av[2];
	std::string replace = av[3];

	while (std::getline(src, str)) {
		while (str.find(find) != std::string::npos) {
			int x = str.find(find);
			str.erase(x, find.length());
			str.insert(x, replace);
		}
		dest << str << std::endl;
	}

	src.close();
	dest.close();
	return 0;
}
