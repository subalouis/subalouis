#include <iostream>
using namespace std;
int main(){
    int a;
    int b = 2;
    float subtotal,amountGiven;
    cout <<"Input the number of purchases goods: ";
    cin >> a;
    cout << "=====================================\n";
    float** purchasedGoods = new float*[a];
    for (int i = 0; i < a; i++){
        purchasedGoods[i] = new float[b];
        purchasedGoods[i][1] = i+1;
        cout << "Input the price of fruit number  " << i+1 << ": ";
        cin >> purchasedGoods[i][0];
        subtotal += purchasedGoods[i][0];
    }
    cout << "=====================================\n";
    for (int i = 0; i < a; i++){
        cout << "Price of Fruit number: " << i+1 << " " <<purchasedGoods[i][0] << endl;
    }
    cout<< "-------------------------------\n";
    cout << "\nTotal amount is: " << subtotal<< " PHP"<< endl;
    cout<< "-------------------------------\n";
      cout << "Enter amount given by customer: "; cin >> amountGiven;
      if(amountGiven-subtotal>0){

     cout << "Your change is:  " << " PHP"<< amountGiven-subtotal;
      }else{
          cout<< "You need additional " <<amountGiven-subtotal<< " PHP";
      } 
}