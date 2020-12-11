/** Louis Andrei Suba
 *  BSCS 2A
 *  Data Structure **/
#include <iostream>
using namespace std;
struct gradesThisSem{
    double mathGrade, progGrade, bioGrade, statGrade, rizalGrade, average;

    void compute(){
        this->average  = (mathGrade +progGrade + bioGrade + statGrade + rizalGrade ) / 5; 
    }  
};
void input (){

       gradesThisSem gradesOfStundents, *pointer;
        pointer = &gradesOfStundents;
cout <<"Enter Grades for Mathematics: "; cin >>pointer->mathGrade;
cout <<"Enter Grades for Advanced C++ Programming: "; cin >> pointer->progGrade;
cout <<"Enter Grades for Biolgy: "; cin >> pointer->bioGrade;
cout <<"Enter Grades for Statistics: "; cin >>pointer->statGrade;
cout <<"Enter Grades for Rizal: "; cin >> pointer->rizalGrade;
cout<< "----------------------------------------------------------"<<endl;
(*pointer).compute();
cout<< "Your Average Grade is: " <<pointer->average << endl;
    };
    
int main (){
     gradesThisSem gradesOfStundents, *pointer;
        pointer = &gradesOfStundents;
cout <<  "--------------"<< endl;
cout <<  "GWA Calculator"<< endl;
cout <<  "--------------"<< endl;
input();
}