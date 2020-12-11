#include <iostream>
#include <stack>

using namespace std;

struct laptopInven{
    string arr[6] = {"CPU", "GPU", "MOBO", "RAM", "STORAGE","DISPLAY"};
      string arr1[6] = {"DISPLAY", "STORAGE", "RAM", "MOTHERBOARD","GPU","CPU"};
};

int main(){

    laptopInven laptopInven;

    stack <string> stack1;

    string word;
    string *wordptr = new string;
    for (int i=0; i < 6; i++){
            cout << laptopInven.arr[i] << ": ";
            cin >> *wordptr;
            stack1.push(*wordptr);
    }

    cout << endl;

    while(!stack1.empty()){
        for (int i = 0 ; i < 6; i++){
            cout << laptopInven.arr1[i] << ": " << stack1.top() << endl;
            stack1.pop();
        }
    }
}