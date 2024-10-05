#include <iostream>

int main() {
	std::string name;

	while(name.empty()){	// while(1==1) infinite loop
		std::cout << "Enter your name: \a";
		std::getline(std::cin, name);
	}

	std::cout << "Hello " << name;

	return 0;
}
