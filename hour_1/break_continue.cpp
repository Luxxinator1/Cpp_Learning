#include <iostream>

int main(){

    // break = break out of a loop
    // contine =skip current iteration

    for(int i = 1; i <= 20; i++){
            if(i == 13){
                // break; ends with 13
                continue; // skips 13
            }
        std::cout << i << '\n';
    }


    return 0;
}