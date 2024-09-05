#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************** CALCULATOR **************" << '\n';

    std::cout << "Enter either (+ - * /): " << '\n';
    std::cin >> op;
    std::cout << "Enter #1: " << '\n';
    std::cin >> num1;
    std::cout << "Enter #2: " << '\n';
    std::cin >> num2;

    switch(op){
        case '+': // singel quotes nicht vergessen, weil es ein character ist
            result = num1 + num2;
            std::cout << "Result: "<< result << '\n';
            break;
        case '-': // singel quotes nicht vergessen, weil es ein character ist
            result = num1 - num2;
            std::cout << "Result: "<< result << '\n';
            break;
        case '*': // singel quotes nicht vergessen, weil es ein character ist
            result = num1 * num2;
            std::cout << "Result: "<< result << '\n';
            break;
        case '/': // singel quotes nicht vergessen, weil es ein character ist
            result = num1 / num2;
            std::cout << "Result: "<< result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid operator!" << '\n';
            break;
    }

    std::cout << "****************************************" << '\n';

    return 0;
}