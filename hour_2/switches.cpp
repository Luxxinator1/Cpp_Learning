#include <iostream>

int main(){

    // switch = alternative to using many "else if" statements
    //          compare one value against matching casese

    int monat;
    std::cout << "In welchem Monat wurdest du geboren? " << '\n';
    std::cin >> monat;

    switch(monat){
        case 1: // bei char wäre 1 zb. 'A'
            std::cout << "Du hast im Januar Geburtstag!" << '\n';
            break;
        case 2:
            std::cout << "Du hast im Februar Geburtstag!" << '\n';
            break;
        case 3:
            std::cout << "Du hast im März Geburtstag!" << '\n';
            break;
        case 4:
            std::cout << "Du hast im April Geburtstag!" << '\n';
            break;
        case 5:
            std::cout << "Du hast im Mai Geburtstag!" << '\n';
            break;
        case 6:
            std::cout << "Du hast im Juni Geburtstag!" << '\n';
            break;
        case 7:
            std::cout << "Du hast im Juli Geburtstag!" << '\n';
            break;
        case 8:
            std::cout << "Du hast im August Geburtstag!" << '\n';
            break;
        case 9:
            std::cout << "Du hast im Oktober Geburtstag!" << '\n';
            break;
        case 10:
            std::cout << "Du hast im September Geburtstag!" << '\n';
            break;
        case 11:
            std::cout << "Du hast im November Geburtstag!" << '\n';
            break;
        case 12:
            std::cout << "Du hast im Dezember Geburtstag!" << '\n';
            break;
        default:                                                        // wird ausgegeben wenn keines der cases erfüllt wird
            std::cout << "Bitte gib eine Monat von 1-12 ein!" << '\n';
            break;

    }

    return 0;
}