#include <iostream>

int main(){

    int age;
    std::cout << "How old are you?: " << '\n';
    std::cin >> age;

    if (age >= 18){ // >= is an operator. There are plenty other operators like >=, =<, ==, >, < and many more
    std::cout << "Welcome!" << '\n'; // if statements = do something if a condition is met 
                                        // if not dann then don't do something or do something else 
                                        // You can check multiple statements with else if
    }
    else if (age < 0) {
        std::cout << "You haven't been born yet!" << '\n';
    }
    else if (age >= 100) {                          // The order is relevant 
        std::cout << "You are very old!" << '\n'; 
    }
    else {
        std::cout << "You are too young!" << '\n';
    }


    return 0;
}