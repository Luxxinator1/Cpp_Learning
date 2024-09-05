#include <iostream>

int main(){

    int age;
    std::cout << "Wie alt bist du?: " << '\n';
    std::cin >> age;

    if (age >= 18){ // >= ist ein Operator. Es gibt viele verschiedene wie >=, =<, ==, >, < usw.
    std::cout << "Willkommen!" << '\n'; // if statements = mach etwas, wenn ein Statement erfüllt wird
                                        // wenn nicht, dann dann tu es nicht oder füre else aus
                                        // mehrere Statements mit einem else if Statement überprüfen
    }
    else if (age < 0) {
        std::cout << "Du wurdest noch nicht geboren!" << '\n';
    }
    else if (age >= 100) {                          // Die Reihenfolge ist von Relevanz
        std::cout << "Du bist sehr alt!" << '\n';   // In diesem Fall daraus am besten das if Statement machen
    }
    else {
        std::cout << "Du bist zu jung." << '\n';
    }


    return 0;
}