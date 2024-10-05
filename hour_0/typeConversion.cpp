#include <iostream>

int main(){

    double x = (int) 3.14; // converts the double into an int 
    std::cout << x << '\n';

    // char i = 100;   <== DON'T USE the implicit form 
    // std::cout << i;
    // use the explicit form as shown below 

   std::cout << (char) 100 << '\n'; // 100 turnes into a 'd' because of the ascii table 

    int correct = 8;
    int questions = 10;
    //double score = correct/questions * 100;
    //std::cout << score << "%" << std::endl; // Output is 0, because 8/10 is 0.8 
                                              // but if we convert questions into a double 
                                              // we get 80% 
    double score = correct/(double)questions * 100;
    std::cout << score << "%" << '\n';

    return 0;
}