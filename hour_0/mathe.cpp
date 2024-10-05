#include <iostream>

int main(){
    int students = 22;
    students++; // +1 Student
    students+=1; // alternative way to write ti 
    
    students--; // subtracts/adds only 1
    students-=1;

    students*=2;

    students/=2;

    std::cout << students; // % => gives remainder of any devision

    return 0;
}