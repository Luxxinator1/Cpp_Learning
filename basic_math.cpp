#include <iostream>
#include <cmath>

// www.cplusplus.com/reference/cmath für mehr Mathe Infos

int main(){
    
    // double benutzen

    double x = 3;
    double y = 4;
    double i = 3.99;
    double z;


    // größer oder kleiner
    // z = std::max(x, y); // Welche der Zahlen ist größer?
    // z = std::min(x, y); // Welche der Zahlen ist kleiner?

    // hoch (dafür braucht man '#include <cmath>' und für alles folgende)
    // z = pow(2, 3); // pow steht für power und es heißt 2 to the power of 3 also 2 hoch 3

    // Wurzel
    // z = sqrt(9); // sqrt steht für square root also Wurzel

    // Absolute number
    // z = abs(-3); // absolute number gibt immer eine positive Zahl

    // Runden
    // z = round(i); // rundet die Zahl 
    // z = ceil(i); // ceiling function => es wird immer hoch gerunded
    // z = floor(i); // es wird immer runter gerunded

    std::cout << z << '\n';


    return 0;
}