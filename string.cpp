#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: \n";
    std::getline(std::cin >> std::ws, name);

    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters!\n";
    }
    else {
        std::cout << "Welcome " << name << '\n';
    }

    if(name.empty()){ // name.empty ist ein boolien
        std::cout << "You didin't enter your name\n";
    }
    else {
        std::cout << "Hello " << name << '\n';
    }
    
    name.clear();

    std::cout << "Hello " << name << '\n';

    return 0;

    name.append("@gmail.com"); // zum string hinzufügen
    std::cout << "Your username is now " << name << '\n';

    std::cout << name.at(0) << '\n'; // displays the character at x position (starts at 0)

    name.insert(0, "@"); // insert the character at x position (starts at 0)

    std::cout << name << '\n';

    std::cout << name.find('u'); // gib die Position des Buchstaben zurück

    name.erase(0, 3); // löscht 0 1 2 -- 0 is the beginnig index 3 the ending index (not inclusive)
}