#include <iostream>

int main(){

    // switch = alternative to using many "else if" statements
    //          compare one value against matching casese

    int monat;
    std::cout << "In which month were you born? " << '\n';
    std::cin >> monat;

    switch(monat){
        case 1: // for char 1 would be e.g. 'A'
            std::cout << "Your birthday is in january!" << '\n';
            break;
        case 2:
            std::cout << "Your birthday is in febuary!" << '\n';
            break;
        case 3:
            std::cout << "Your birthday is in march!" << '\n';
            break;
        case 4:
            std::cout << "Your birthday is in april!" << '\n';
            break;
        case 5:
            std::cout << "Your birthday is in may!" << '\n';
            break;
        case 6:
            std::cout << "Your birthday is in june!" << '\n';
            break;
        case 7:
            std::cout << "Your birthday is in july!" << '\n';
            break;
        case 8:
            std::cout << "Your birthday is in august!" << '\n';
            break;
        case 9:
            std::cout << "Your birthday is in september!" << '\n';
            break;
        case 10:
            std::cout << "Your birthday is in october!" << '\n';
            break;
        case 11:
            std::cout << "Your birthday is in november!" << '\n';
            break;
        case 12:
            std::cout << "Your birthday is in december!" << '\n';
            break;
        default: // is printed if non of the cases is being fulfilled
            std::cout << "Please enter a number between 1 - 12!" << '\n';
            break;

    }

    return 0;
}