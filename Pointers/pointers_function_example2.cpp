#include <iostream>
using namespace std;

int getNumber(){
    return 5;
}

int add(int a, int b){
    return a + b;
}

int main(){

    // cout << getNumber();
    // cout << getNumber; // Without (), it will return Address

    // Assign address (getNumber) to pointer function.
    int (*funcPtr)() = getNumber; // pointer function will point to the address of 
                                  // getNumber (Note: (), it will return Address)

    // Use pointer function to invoke getNumber()
    cout << funcPtr() << endl;

    int (*funcPtrAdd)(int, int) = add;
    cout<< add(2,3) << endl;
    cout<< funcPtrAdd(3,4) << endl;

    return 0;


}