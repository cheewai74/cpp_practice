#include <iostream>
using namespace std;

class Car{
    // Private by default, thus have to declare Public.
public:
    string Name;
    string Color;
    double Price;

    // Constructor 
    // Rule 1: Does not have a return type.
    // Rule 2: Same name as class. 

    Car(string name, string color, double price){
        Name = name;
        Color = color;
        Price = price;
    }

    // method 
    void getInfo(){
        cout << "Name: " << Name << " Color: " << Color << " Price: $" << Price << endl;
    }

};

int main(){

    // Car myCar;
    // myCar.Name = "Ford";
    // myCar.Color = "White";
    // myCar.Price = 55000.00;

    // Car myCar2;
    // myCar2.Name = "Jaguar";
    // myCar2.Color = "Black";
    // myCar2.Price = 60000.00;

    Car myCar("Ford", "White", 55000.00);
    Car myCar2("Jaguar", "Black", 60000.00);

    // cout << "Name: " << myCar.Name << " Color: " << myCar.Color << " Price: $" << myCar.Price << endl;
    // cout << "Name: " << myCar2.Name << " Color: " << myCar2.Color << " Price: $" << myCar2.Price << endl;
    myCar.getInfo();
    myCar2.getInfo();
    
}