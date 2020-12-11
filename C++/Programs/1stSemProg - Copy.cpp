/**struct
*pointer 
*multi diminsional
*stack
*q
rfid queuing system
first part:
get q
get details (name)
hi
**/
#include <iostream>
#include <time.h>
#include <conio.h>
#include <stack>
using namespace std;
int front=-1, rear=-1;
string q[100];
int count;

// queuing 
bool ifEmpty(){
    if (front==-1 && rear ==-1)
        return true;
    else
        return false;
}
void enQueue(string input){
    if (ifEmpty()){
        ++front;
            q[front] = input;
            ++rear;
    }
    else{
            ++rear;
            q[rear] = input;
    }
}

void deQueue(){
    for (int i =0; i<=rear; i++){
        q[i] = q[i++];
    }
}
void queueOutput (){
    cout<< "This is the waiting persons for the q";
    for (int i = 0; i<=rear; i++){
        cout<< "\t" << i+1<< ": " << q[i];
    }
}

void entryScreen(){
    system("CLS");
    cout << "\t===================================\n";
    cout << "\t\tWELCOME TO DASHBOARD\n";
    cout << "\t===================================\n";
    cout <<"\t1.) Excutive Staff\n"; //mema                                     //create    (enquwu)
    cout << "\t2.) Create a new Order\n"; //enqueue                             //delete ( dequeue)
    cout << "\t3.) Summary of Orders\n"; //stack and 2d array (dequeueing)      //summary (enqueue and 2d array)
    cout << "\t4.) Reviews\n" ; //blank fuction                                 //summary of deleted orders(stacks)
    cout << "\t===================================\n";
}
struct orderDetails{ //struc for cars
   char inCharge[10],customerName[20], address[50], deliveryType[10];
   long contactNumber, referenceNumber;
   double price;
}  orderArr[50];


struct deliveryDetails //struct for owner details
{
   char deliverName[50];
   int contactNum, idNum;
};

void detailsEntry (){
//pointerdeclaration
system ("CLS");
 stack <int> stack1;
 
for (int i =0; i<count; i++){
    cout<<"Input Customer Name: "; cin.getline(orderArr[i].customerName, 20);
    enQueue(orderArr[i].customerName);
    cout<<"Input Customer Contact Number: "; cin>> orderArr[i].contactNumber;
    cin.ignore();
     cout<<"Enter the price: "; cin>>orderArr[i].price;
    cin.ignore();
    cout<<"Enter Customer Address: "; cin.getline(orderArr[i].address,50);
    cout<<"Delivery Type: (COD, Card, Bank Transfer...)"; cin.getline(orderArr[i].deliveryType,10);
}
system("pause");
}
void summary(){
    system ("CLS");
    cout << "CUSTOMER NAME\tCONTACT #\tADRESS\tPRICE\tDELIVERY TYPE\n";
    for (int i = 0; i < count; i++)
    {
        cout << orderArr[i].customerName<<"\t"<< orderArr[i].contactNumber<<"\t"<<orderArr[i].address<<"\t"<< orderArr[i].price<<"\t"<< orderArr[i].deliveryType<<endl;
    }
    system("pause");

}



void execStaff(){
 
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

int press;
cout<< "Press 1 to return to main screen"; cin >> press;
cout<< "Press 2 to return to create a new order"; cin >> press;
        if(press==1){
            entryScreen();
        }if (press==2){
            detailsEntry();
        }
}

int main (){
    int choice;
    while(true){
        entryScreen();
        cout << "\tEnter Number Here: "; cin >> choice;
        cout << "\n\t===================================\n";
        cout <<"*******************************************************************************************\n";
        //switchcase
switch (choice){
    case 1:
        execStaff();
        break;
    case 2:
        cout <<"Enter Number of Customers: "; cin >> count;
        cin.ignore();
        detailsEntry();
        break;
    case 3: 
        summary();
        break;
    case 4:
        cout <<"Thank you!";
        break;
}

    }
}
/**
  char plateNum[10], carManuf[10], carColor[10], carType[10];
   int engineNumber, bodyNumber, yearManufac ; **/