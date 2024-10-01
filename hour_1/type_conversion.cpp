#include <iostream>

int main(){

    double x = (int) 3.14; // mit (int) von double in ein int umwandeln
    std::cout << x << '\n';

    /*
    char i = 100;   <-- Implicit form NICHT BENUTZEN
    std::cout << i;
    */
   //Explicit form benutzen wie unten gezeigt

   std::cout << (char) 100 << '\n'; // 100 wird zu d wegem dem Ascii Table

    int correct = 8;
    int questions = 10;
    //double score = correct/questions * 100;
    //std::cout << score << "%" << std::endl; // Output ist Null, weil 8/10 0.8 ist. 
                                              // Wenn wir jetzt aber die questions zu einem double machen 
                                              // bekommen wir 80% 
    double score = correct/(double)questions * 100;
    std::cout << score << "%" << '\n';

    return 0;
}