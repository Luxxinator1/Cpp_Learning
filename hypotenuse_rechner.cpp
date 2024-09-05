#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "HYPOTENUSEN RECHNER" << '\n';
    std::cout << "von einem Dreieck" << '\n';
    std::cout << '\n';

    std::cout << "Kathete1: ";
    std::cin >> a;
    std::cout << "Kathete2: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b); 

    // oder kürzer

    //c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Die Hypotenuse beträgt " << c << "cm." << '\n';

    return 0;
}