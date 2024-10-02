#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "****** NUMBER GUESSING GAME ******\n";

    do{
        std::cout << "Enter a guess between (1-100):\n";
        std::cin >> guess;
        tries++;

        if(guess > num){ 
            std::cout << "Too high!\n";
        }else if(guess < num){
            std::cout << "Too low!\n";
        }else{
            std::cout << "CORRECT! # of tires: " << tries << '\n';
        }


    }while(guess != num);

    std::cout << "**********************************\n";

    return 0;
}