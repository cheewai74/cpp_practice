#include <iostream>
using namespace std;

void celebrateBirthday(int* age);

int main(){

    int myAge = 25;
    cout << "Before function, age: "<< myAge << endl; // 25
    // celebrateBirthday(myAge); // 26
    // cout << "After function, age:  "<< myAge << endl; // 25

    celebrateBirthday(&myAge); // 26
    cout << "After function, age:  "<< myAge << endl; // 25
}

// void celebrateBirthday(int age){
//     age++;
//     cout << "Yayeeeee, celebrated "<< age << ". birthday." << endl;
// }

void celebrateBirthday(int* age){

    // Deference this pointer. Acess the value store on that address and increment the value.
    (*age)++;
    cout << "Yayeeeee, celebrated "<< *age << ". birthday." << endl;
}