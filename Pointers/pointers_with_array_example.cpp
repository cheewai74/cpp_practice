#include <iostream>
using namespace std;

int main(){

    int luckyNumbers[5] ={1,3,5,7,9};

    // address of the first element
    cout << luckyNumbers << endl; 
    cout << &luckyNumbers[0] << endl; 

    cout << luckyNumbers[0] << endl;

    int* luckyPointer = luckyNumbers; // will point to address of the 1st element.
    cout << "Pointing to "<< luckyPointer << ", value: " << *luckyPointer << endl; // Pointing to 0xffffcbc0, value: 1
    luckyPointer++; // increment the address
    cout << "Pointing to "<< luckyPointer << ", value: " << *luckyPointer << endl; // Pointing to 0xffffcbc4, value: 3
    
}