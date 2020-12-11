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
#include <bits/stdc++.h>
using namespace std;
int front=-1, rear=-1;
string q[100];
int ctr;
string table [50][50];
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
    --rear;
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
struct orderDetails{ //struc for order detaills
   char inCharge[10],customerName[20], address[50], deliveryType[10];
   long contactNumber, referenceNumber;
   int price;
}  orderArr[50];


struct deliveryDetails //struct for owner details
{
   char deliverName[50];
   int contactNum, idNum;
};
string convertToString(char* a, int size) 
{ 
    int i; 
    string s = ""; 
    for (i = 0; i < size; i++) { 
        s = s + a[i]; 
    } 
    return s; 
} 

void detailsEntry (){
//pointerdeclaration
system ("CLS");
 stack <int> stack1;

for (int i =0; i < ctr; i++){
    cout<<"Input Customer Name: "; cin.getline(orderArr[i].customerName, 20);
    enQueue(orderArr[i].customerName);
    table[i][0] = convertToString(orderArr[i].customerName, sizeof(orderArr[i].customerName)/sizeof(orderArr[i].customerName[0]));
    cout<<"Input Customer Contact Number: "; cin>> orderArr[i].contactNumber;
    table[i][1] = to_string(orderArr[i].contactNumber);
    cin.ignore();

 cout<<"Enter the price: "; cin>>orderArr[i].price;
    table[i][2] = to_string(orderArr[i].price);
    cin.ignore();

    cout<<"Enter Customer Address: "; cin.getline(orderArr[i].address,50);
    table[i][3] = convertToString(orderArr[i].address, sizeof(orderArr[i].address)/sizeof(orderArr[i].address[0]));

    cout<<"Delivery Type: (COD, Card, Bank Transfer...)"; cin.getline(orderArr[i].deliveryType,10);
    table[i][4] = convertToString(orderArr[i].deliveryType, sizeof(orderArr[i].deliveryType)/sizeof(orderArr[i].deliveryType[0]));
}
system("pause");
}

void summary(){
    system ("CLS");

    cout << "CUSTOMER NAME\t   CONTACT #\tPRICE\tADDRESS\t\tDELIVERY TYPE\n";
    for (int i = 0; i < ctr; i++)
    {
        for(int j = 0; j < 5; ++j){
            cout << table[i][j] << "\t   ";
        }
        cout << endl;
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
        cout <<"Enter Number of Customers: "; cin >> ctr;
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