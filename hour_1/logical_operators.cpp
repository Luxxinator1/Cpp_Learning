#include <iostream>

int main(){

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand (sets true => false and the other way around)

    int temp;

    std::cout << "Enter the temperature: "; 
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!" << '\n';
    }
    else {
        std::cout << "The temperatur is bad!" << '\n';
    }

    bool sunny = true;

    if(sunny){
        std::cout << "It is cloudy outside!" << '\n';
    }
    else{
        std::cout << "It is sunny outside!" << '\n';
    }
    return 0;
}