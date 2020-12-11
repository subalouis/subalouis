/**SUBA, LOUIS ANDREI L.
BSCS 2A **/
#include <iostream>
#include <stack>
int main (){
  int count=5;
std::stack <int> stack1;
for (int i=0; i<count;i++){
  stack1.push(i);
}

std::cout<< "The top element in stack using TOP(): " << stack1.top() <<std::endl;
std::cout<< "The elements in the stack are: ";
while(!stack1.empty()){
  std::cout << stack1.top()<< " ";
    stack1.pop();
} 
}

/*void entryScreen(){
    system("CLS");
    cout << "\t===================================\n";
    cout << "\t\tWELCOME TO DASHBOARD\n";
    cout << "\t===================================\n";
    cout <<"\t1.) Excutive Staff\n"; //mema                                     //create    (enquwu)
    cout << "\t2.) Create a new Order\n"; //enqueue                             //delete ( dequeue)
    cout << "\t3.) Summary of Orders\n"; //stack and 2d array (dequeueing)      //summary (enqueue and 2d array)
    cout << "\t4.) Reviews\n" ; //blank fuction                                 //summary of deleted orders(stacks)
    cout << "\t===================================\n";*/						