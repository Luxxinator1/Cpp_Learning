#include <iostream>

int main(){
    std::string name;
    std::cout << "What's your name? " << '\n';
    std::cin >> name;
    std::cout << "Hello " << name << "!"<< '\n';

    int age;
    std::cout << "What's your age? " << '\n';
    std::cin >> age;
    std::cout << "You are " << age << " years old. " << '\n';

    std::string full_name;
    std::cout << "What's your full name? " << '\n';

    // std::cin >> full_name; Problem: std::cin doesn't recognize whitespaces 
    // Insted use the following method

    std::getline(std::cin >> std::ws, full_name); // std::ws = whitespace 
    std::cout << "Hello " << full_name << ". " << '\n';

    return 0;
}