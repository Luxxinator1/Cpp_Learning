#include <iostream>

int main(){

    //Benutze const für saubereren Code!

    //int
    const int AGE = 14;
    int level;
    level = 50;
    std::cout << "Ich bin " << AGE << " Jahre alt!" << '\n';
    std::cout << "Mein Level ist " << level << '\n';

    //double
    const double NOTENDURCHSCHNITT = 2.4;
    std::cout << "Mein Notendurchschnitt ist " << NOTENDURCHSCHNITT << "." << '\n';

    //bool
    const bool VERHEIRATET = false;
    std::cout << "Bist du verheiratet? " << VERHEIRATET << '\n';

    //char
    //Denk an die '' beim char
    const char GRADE = 'A';
    std::cout << "Meine Note ist " << GRADE << '\n';

    //string
    const std::string SATZ = "Das ist ein String!";
    std::cout << SATZ; 
    return 0;
}