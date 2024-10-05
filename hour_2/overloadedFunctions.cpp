#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("pepperoni", "mushrooms");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
// vaild for a functions to share the same name but the parameters have to be different
void bakePizza(std::string topping1){ // functions name + parameters = functions signiture
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}