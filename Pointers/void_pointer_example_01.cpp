/**
 * @file void_pointer_example_01.cpp
 *
 *  1. A special pointer that can hold the address of any other  data type.
 *  2. You cannot directly dereference a void pointer.
 */

#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout << * numberPtr << endl;
}

void printLetter(char* charPtr){
    cout << * charPtr << endl;
}

// E.g: of void pointer
void print(void* ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << endl; break; // Perform a cast to the int value.
        case 'c': cout << *((char*)ptr) << endl; break;

    }
}

int main(){

    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');
    return 0;
}