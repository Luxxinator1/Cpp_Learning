#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using std::cout;
    using std::endl;
    using namespace first;

    //using namespace std; auf keinen Fall benutzen

    cout << x << endl;
    cout << first::x << endl;
    cout << second::x;

    return 0;
}