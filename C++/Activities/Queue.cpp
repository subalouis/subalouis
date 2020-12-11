/*
*  LOUIS ANDREI SUBA
*   BSCS 2A
*/

#include <iostream>
#include<queue>
using namespace std;
int main (){
queue<int> queue1;

for (int i=1;i<=10;i++){
    cout << "Enqueueing: " << i << endl;
    queue1.push(i);
}
cout << "--------------------------- "<<endl;
cout << "The size of the queue is: " << queue1.size()<<endl;
cout << "The back (last) of the queue is : " << queue1.back()<<endl;
cout << "--------------------------- "<<endl;
while(!queue1.empty()){
    cout << "De-queueing " << queue1.front() <<endl;
    queue1.pop();
}

}