#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string arrHeader[6] = {"Student Name", "ENGLISH", "MATH", "SCIENCE", "ICT", "AVERAGE"};
    string studName[7] = {"Claire", "Cheska", "Shaira", "Adrian", "Aden", "Mark", "Rafael"};
    int studGrade[7][4] = { {90, 85, 95, 91},  {95, 80, 85, 89}, {91, 92, 97, 89}, {85, 89, 87, 92}, 
                                                {87, 92, 86, 93}, {80, 78, 77, 75}, {81, 85, 75, 87} };
    int gradeName = 0;
    float classAve = 0;
    ////////////////////////////////////////////////////
    for (int b = 0; b < 6; b++){
        cout << arrHeader[b] << "\t";
    }
    cout << endl;

    for (int a = 0; a < 7; a++){
        gradeName = 0;
        for (int b = 0; b < 6; b++){
            if (b == 0){ 
                cout << studName[a] << "\t\t";
            }
            else if (b == 5){ 
                cout << fixed << setprecision(2) <<  gradeName / 4.0;
classAve += gradeName / 4.0;
            }
            else { //Grades
                cout << studGrade[a][b-1] << "\t";
                gradeName += studGrade[a][b-1]; 
            }
        }
        cout << endl;
    }

    classAve /= 7.0; 
    cout << "\nTotal number of students: 7 \t Total class Average: " << classAve;

}
