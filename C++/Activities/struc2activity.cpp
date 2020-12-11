#include <iostream>
using namespace std;

struct sariSariStoreInventory{
    int fruits, candies, chips, bread, iceCream;
};

int main(){ // declaration
    sariSariStoreInventory *storePointer, store;
    storePointer = &store;

    cout <<"Number of ice cream: \t"; cin >> storePointer->iceCream;
    cout <<"Number of candies: \t"; cin >> storePointer->candies;
    cout <<"Number of fruits: \t"; cin >> storePointer->fruits;
    cout <<"Number of chips: \t"; cin >> storePointer->chips;
    cout <<"Number of bread: \t"; cin >> storePointer->bread;
    

    int total = storePointer->candies + storePointer->chips + storePointer->iceCream +storePointer->bread + storePointer->fruits;
    cout<<"----------------------------"<<endl;
    cout << "Total inventory: \t" << total;
    
    return 0;
}