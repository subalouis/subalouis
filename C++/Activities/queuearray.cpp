#include <iostream>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
string todo[10];
char user[20];
int frnt = -1, rear = -1;

time_t timeToday = time(NULL);

void details(){
    cout << "Enter your name: "; cin.getline(user,20);
    cout << "Welcome " << user << "! Have a great day ahead!" <<endl;
    cout << "Today is: "; printf("%s", ctime(&timeToday));
      cout << "\n(press any key to continue..: " <<endl;
}
bool ifEmpty(){
    if (frnt ==-1 && rear ==-1)
          return true;
    else
        return false;
}

void queueing (string input){
    if (ifEmpty()){
        ++frnt;
                todo[frnt] = input;
                ++rear;
    }
    else{
                ++rear;
                todo[rear] = input;
    }
}

void dequeueing(){
    for (int i=0; i<=rear;++i){
        todo[i] = todo[i++];
    }
}
void queueOutput(){
    cout<< "Wooh! That's a lot of task to accompish "<< user <<"!" <<endl;
    cout<< "Alright then, "<< user <<"--" <<endl;
        cout<< "This is your to-do list for this day : "<<endl;
    for(int i = 0 ; i<=rear; ++i){
        cout<<"\t" << i+1  << ": " << todo[i] <<endl;
    }
}
void exitMessage (){
    cout<< "-----------------------------------------------------------"<<endl;
    cout<< "What a Day! You did Great! Go take a rest, you deserve it!"<<endl;
     cout<< "            SEE YOU TOMORROW, "<< user<< " :D" << endl;
    cout<< "-----------------------------------------------------------"<<endl;
}

int main (){

details();
getch();
system("CLS");

int taskNumber;
string yourTask;
cout<< "Here is your friendly to do list!"<<endl;
cout<< "To start your productive day, please input your number of tasks today: "; cin >> taskNumber;
cout<< "Hey there "<<user<<"! What are your plans for this day?"<<endl;
cin.ignore();
for (int i= 0; i<taskNumber; i++){
    cout <<"\t" <<  i+1 << " : ";
    getline(cin,yourTask);
    queueing(yourTask);
}
for (int i=0; i<=rear; ++i){
    system("CLS");
    queueOutput();
    system ("PAUSE");
}
system("CLS");
exitMessage();
}