#include <iostream>
using namespace std;

int main(){

    int luckyNumbers[5]={2,3,5,7,9};
    cout << luckyNumbers << endl; // we get the address of the 1st element of the array.
    cout << &luckyNumbers[0] << endl; // we prove above code is address of 1st element of the array.

    // Both should get 5
    cout << luckyNumbers[2] << endl; // Get 5
    cout << *(luckyNumbers+2) << endl; // Please use the address of the 1st element. 
                                       // Add 2 more address to these number and 
                                       // dereference this var.

    int reallyLuckyNumbers[5];
    for(int i=0; i<=4; i++){
        cout << "Number: " << endl; 
        cin >> reallyLuckyNumbers[i];
    }

    for(int i=0; i<=4; i++){
        cout << *(reallyLuckyNumbers+i) << " ";
    }

    return 0;
}