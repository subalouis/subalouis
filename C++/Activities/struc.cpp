#include <iostream>
using namespace std;

struct studRecord{   //structure
    int studNumber;
    char studGrade;
};
int main(){


   
studRecord *pointer, s;   //declaration
pointer = &s;

cout << "Insert Student Number: ";   //input
cin >> (*pointer).studNumber;

cout << "Insert Student Grade: ";
cin >> (*pointer).studGrade;

cout << "Details of stduents as follows: "<<endl;

cout << "Student Number: " << (*pointer).studNumber <<endl;   //output
cout << "Grade: " << (*pointer).studGrade;
}