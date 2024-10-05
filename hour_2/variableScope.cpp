#include <iostream>

// avoid global variables if you can
// a functions will use any local variables first 

int myNum = 3;

void printNum();

int main(){

    // Local variables = declared inside a funciton or block {}
    // Global varables = declared outside of all functions

    int myNum = 1;

    printNum();

    std::cout << ::myNum << '\n'; // :: <= scope resolution operator
                                  // uses the global variable

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << '\n';
}