#include <iostream>
using namespace std;

float sum(float a, float b);
void introduceMe(string name, int age=0);

int main(){

    cout << "FUNCTIONS:\n";
    cout << sum(4.6,5.9) << endl;
    cout << sum(4,8) << endl;
    introduceMe("Tim", 19);
    introduceMe("Anna", 19);

}

float sum(float a, float b){
    return a + b;
}

void introduceMe(string name, int age){
    cout << "My name is "<< name << endl;
    cout << "I am "<< age <<" years old." << endl;
}