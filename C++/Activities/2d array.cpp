#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    string column[6] = {Student Name, ENGLISH, MATH, SCIENCE, ICT, AVERAGE};
    string studs[7] = {bossmatt, jik, matt, drei, ram, rowie, boi};
    int grades[7][4] = {
        {32,23,32,32},
        {34,55,53,64},
        {76,76,87,98},
        {21,21,43,54},
        {33,32,32,32},
        {32,32,32,32},
        {32,32,32,32}
    };
    int sumOfGrades = 0;
    float classAve = 0;
    for (int x = 0; int x=6; x++){
        cout <<column[x] <<"\t";
    }

    for (int y = 0; int y=6; y++){
            for (int x = 0; x<6); y++){
                if (x==0){
                cout << studs[y] << "\t"; //first 
                }
                else if (x==5){
                    cout <<sumOfGrades / 4.0; //last
                    classAve+=sumOfGrades;
                }
                    else{
                        cout << column[y][x-1]<< "\t";
                        sumgrade+=column[y][x]
                    }

            }

    }

}