#include <iostream>
#include <cwchar>
#include<windows.h>
#include <conio.h>
int orderCount = 5;
int OrderTotal = 10;
float totalCost = 5399.45;
bool task;
using namespace std;
int main (){

int choice;

jump:
cout << "\t===================================\n";
cout << "\t\tWELCOME TO DASHBOARD\n";
cout << "\t===================================\n";
cout <<"\t1.) Excutive Staff\n";
cout << "\t2.) Total Orders\n"; 
cout << "\t3.) Total cost of Deliveries for the day\n";
cout << "\t4.) Reviews\n" ; 
cout << "\t===================================\n";
cout << "\tEnter Number Here: "; cin >> choice;
cout << "\n\t===================================\n";

cout <<"*******************************************************************************************\n";
switch (choice){

case 1:
        staff();
    break;
case 2:
       cout<<  orderCount;
    break;
case 3: 
    totalCost;
    break;
case 4:
    reviews();

default:
    break;

    }
}







void staff(){
 
cout <<"*******************************************************************************************\n";

cout << "\t===================================================\n";
cout << "\t\tWelcome to CCS Delivery Programming\n";
cout << "\t===================================================\n";
cout << "\t\tMembers of Delivery Programming:\n";
cout << "\t===================================================\n";
cout << "\t\tSuba, Louis Andrei - C.E.O\n";
cout << "\t\t=======================\n";
cout << "\t\tPangilinan, Jerico - PRESIDENT\n";
cout << "\t\t=======================\n";
cout << "\t\tGaspar, Mark Jimwell - SECRETARY\n";
cout << "\t\t=======================\n";
cout << "\t\tSumandal III, Fernando - VICE PRESIDENT\n";
cout << "\t\t=======================\n";
cout << "\t\tIntal, Ferwinkle - SECRETARY\n";
cout << "\t=================================================\n";

system ("PAUSE");


}

void reviews(){
    cout << "5 star";
}









/*
Menu
1. Get Ticket
2. Fi




*/
