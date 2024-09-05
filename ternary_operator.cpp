#include <iostream>

int main(){

    // ternary operator ?: replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 50;

    grade >= 60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n';

    int number = 9;
    number % 2 ? std::cout << "ODD" << '\n' : std::cout << "EVEN" << '\n'; // % gives remainder of any devision

    bool hungry = false;

    std::cout << (hungry ? "You are hungry" : "You are full") << '\n'; // alternative Schreibweise


    return 0;
}