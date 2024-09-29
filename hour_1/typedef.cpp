#include <iostream>

//name_t _t steht für typedef
//mittlerweile benutzt man using
//für using auch _t
using number_t = int;
typedef std::string text_t;

int main(){

    number_t age = 14;
    std::cout << "Ich bin " << age << " Jahre alt." << '\n';
 
    text_t first_name = "Lukas";
    std::cout << first_name;

    return 0;
}