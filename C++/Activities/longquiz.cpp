#include <iostream>
#include <stack>
#include <conio.h>
using namespace std;
int count;
struct laptopSpec
{
    stack <int> laptopStack;
    stack <string> lappy;


    char brand[20];

};


int main (){

int count,counter =1 ;
laptopSpec *laptopPointer, laptop;
laptopPointer = &laptop;

cout <<"Enter Number of Entries: "; cin >>count;

cout <<"Enter Laptop Brand and Model Number: "; cin.getline (laptop.brand, 20);


    stack <string> laptopStack;
  for (int i = 0; i<=count; i++){
      laptopStack.push(laptop.brand);     
  }

while (!laptopStack.empty()){
    cout <<"1:) " << laptopStack.top()<<endl;
    laptopStack.pop();
  
}
}

