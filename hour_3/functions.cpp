#include <iostream>

void abc(std::string name, int age);

void happyBirthday(){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday to you!\n\n";
}

int main(){

    // funciton = a block of reusable code
    // declare the function before the main function
    // declare first define later

    std::string name = "Lukas"; // cant accesses variables outside of your funcition 
    int age = 14;

    happyBirthday();
    happyBirthday();
    happyBirthday();

    abc(name, age);

    return 0;
}

void abc(std::string name, int age){ // needs a receving parameter
    std::cout << "a b c\nd e f\ng h i\nj k l\nm n o\np q r\ns t u\nv w x\ny z\n\n";
    std::cout << name << '\n';
    std::cout << age << '\n';
}