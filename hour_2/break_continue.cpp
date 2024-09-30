#include <iostream>

int main(){

    // break = break out of a loop
    // contine =skip current iteration

    for(int i = 1; i <= 20; i++){
            if(i == 13){
                // break; endet mit 13
                continue; // überspringt 13
            }
        std::cout << i << '\n';
    }


    return 0;
}