#include <iostream>

int main(){

    /*
        loop(){
            loop(){
            
            } 
        }
    */

    // loop in a loop

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){  // inner loop nennt man oft j
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: \n";
    std::cin >> rows;

    std::cout << "How many columns?: \n";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: \n";
    std::cin >> symbol;
    std::cout << '\n';

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){  // inner loop nennt man oft j
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}