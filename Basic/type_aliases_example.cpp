#include <iostream>
#include <string>
#include <vector>

using MyInt = int;
using MyString = std::string;
using MyVector = std::vector<int>;

int main(){
    MyInt x = 123;
    MyString s = "Hello World";
    MyVector v ={1,2,3,4,5};

    std::cout << x << std::endl;
    std::cout << s << std::endl;
    std::cout << v[0] << std::endl;
}