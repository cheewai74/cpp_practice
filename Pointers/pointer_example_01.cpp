#include <iostream>
using namespace std;

int main(){

    // int a = 10;
    // int * p;
    // p = &a;

    // std::cout << "\n a = " << a << std::endl ;
    // std::cout << "\n &a = " << &a << std::endl;
    // std::cout << "\n p = " << p  << std::endl;
    // std::cout << "\n *p = " << *p <<std::endl;
    // std::cout << "\n &p = " << &p << std::endl;

    int n = 5;
    cout << &n << endl; // look at the address of namespace
    int* ptr = &n; //  Pointer is holding the address of namespace
    cout << ptr << endl; // it will display the address of n variable.
    cout << *ptr << endl; // Deference the pointer to read out the value.

    *ptr = 10; // Address of ptr store the value of 10
    cout << *ptr << endl;
    cout << n << endl; // It's 10 bcos ptr stores the address of n 
                       // and was dereference to store the value of 10.


    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v = "<< v << endl; // v = 7 bcos we have assigned it here *ptr2

    return 0;

}