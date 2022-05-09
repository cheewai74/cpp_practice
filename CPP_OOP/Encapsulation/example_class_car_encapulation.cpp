#include <iostream>
using namespace std;

class Car{

    // Encapsulation Rule 1: 
    // The data members should be labeled as private using the private access specifiers.
    // Create GET SET if want to access private members
private:
    string Name;
    string Color;
    double Price;
    bool IsBroken;

public:

    // Constructor 
    // Rule 1: Does not have a return type.
    // Rule 2: Same name as class. 

    Car(string name, string color, double price){
        Name = name;
        Color = color;
        Price = price;
        IsBroken = false;
    }

    // method 
    void getInfo(){
        cout << "Name: " << Name << " Color: " << Color << " Price: $" << Price << endl;
    }

    void crashCar(){
        cout << Name << " crashed" << endl;
        IsBroken = true;
    }

    void repairCar(){
        cout << Name << " repaired" << endl;
         IsBroken = false;
    }

    void move(){
        if(IsBroken)
            cout << Name << " is broken";
        else
            cout << Name << " is driving";
    }
};

int main(){


    Car ford("Ford", "White", 55000.00);
    Car Jaguar("Jaguar", "Black", 60000.00);

    ford.getInfo();
    ford.move();
    ford.crashCar();
    ford.move();
    ford.repairCar();
    ford.move();
 

    
}