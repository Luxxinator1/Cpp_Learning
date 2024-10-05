#include <iostream>
#include <cmath>

// www.cplusplus.com/reference/cmath for more informations about the libary

int main(){
    
    double x = 3;
    double y = 4;
    double i = 3.99;
    double z;


    // larger or smaller 
    // z = std::max(x, y); // Which of the two numbers is larger?
    // z = std::min(x, y); // Which of the two numbers is smaller? 

    // for the following lines you need the cmath libary

    // power 
    // z = pow(2, 3); //  2 to the power of 3

    // Square root
    // z = sqrt(9);

    // Absolute number => |-7| = |7|
    // z = abs(-3);

    // Rounding numbers
    // z = round(i); // rounds the number 
    // z = ceil(i); // ceiling function => always rounds up 
    // z = floor(i); // floor funciton => always rounds down 

    std::cout << z << '\n';


    return 0;
}