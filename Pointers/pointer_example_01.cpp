#include <iostream>

int main(){

    int a = 10;
    int * p;
    p = &a;

    std::cout << "\n a = " << a << std::endl ;
    std::cout << "\n &a = " << &a << std::endl;
    std::cout << "\n p = " << p  << std::endl;
    std::cout << "\n *p = " << *p <<std::endl;
    std::cout << "\n &p = " << &p << std::endl;


    getchar();

}