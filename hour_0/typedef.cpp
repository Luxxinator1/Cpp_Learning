#include <iostream>

// _t is used when definening something with typedef
// nowadays using is more commenly used
// for it you also use _t 

using number_t = int;

typedef std::string text_t;

int main(){

    number_t age = 14;
    std::cout << "I am " << age << " years old." << '\n';
 
    text_t first_name = "Bro";
    std::cout << first_name;

    return 0;
}