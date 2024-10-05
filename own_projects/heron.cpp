#include <iostream>

int main(){
	std::cout << "Please insert a number!\n";
	double user_input;
	double x;
	double y;
	std::cin >> user_input;
	x = user_input/2;
	y = (x+2)/2;
	while (1==1){
		x = (x+y)/2;
		std::cout << x << '\n';
		y = user_input/x;
		std::cout << y << '\n';
	}

	return 0;
}
