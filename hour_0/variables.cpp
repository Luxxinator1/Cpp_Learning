#include <iostream>

int main(){

    // Use const for cleaner code
    // The cont keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read only)

    // integer (whole number)
    const int AGE = 14; // when using const you write the variable name in caps
    int level;
    level = 50;
    std::cout << "I am " << AGE << " years old!" << '\n';
    std::cout << "My level is " << level << '\n';

    // double (number including decimal)
    double averageGrade = 2.4;
    std::cout << "My average grade is " << averageGrade << "." << '\n';

    // boolean (true or false)
    bool married = false;
    std::cout << "Are you married? " << married << '\n';

    // single character
    char grade = 'A';
    std::cout << "My grade is " << grade << '\n';

    // string (objects that represents a sequence of text)
    std::string sentence = "This is a string!";
    std::cout << sentence; 
    return 0;
}