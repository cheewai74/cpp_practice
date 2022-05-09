#include <iostream>
using namespace std;

class Car{

    // Encapsulation Rule 1: 
    // The data members should be labeled as private using the private access specifiers.
    // Create GET SET if want to access private members
private:
    string Color;
    double Price;
    
// Note: for derived class to have access to properties, 
//       will need to be declared under protected access modifier. 
protected:
    string Name;
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
            cout << Name << " is broken"<<endl;
        else
            cout << Name << " is driving"<<endl;
    }
};

// FlyingCar - Derived Class 
// Car - Base Class
class FlyingCar: public Car{

public:
    // :Car - Please invoke my Car constructor, let car constructor knows how to 
    //        instantiate it's properties and let car contructor due with those properties.
    FlyingCar(string name, string color, double price):Car(name, color, price){

    }

    void move(){
        if(IsBroken)
            cout << Name << " is broken"<<endl;
        else
            cout << Name << " is flying"<<endl;
    }

};

class UnderwaterCar: public Car{

public:
    // :Car - Please invoke my Car constructor, let car constructor knows how to 
    //        instantiate it's properties and let car contructor due with those properties.
    UnderwaterCar(string name, string color, double price):Car(name, color, price){

    }

    void move(){
        if(IsBroken)
            cout << Name << " is broken"<<endl;
        else
            cout << Name << " is diving"<<endl;
    }

};

int main(){

    Car ford("Ford", "White", 55000.00);
    FlyingCar flyingCar("Sky Fury","Blue", 550000.00);
    UnderwaterCar underwaterCar("Pink Dolphin","Red", 850000.00);
    ford.move();
    flyingCar.move();
    underwaterCar.move();
 
    Car* car1 = &flyingCar;
    Car* car2 = &underwaterCar;

    car1->crashCar();
    car2->crashCar();

    ford.move();
    flyingCar.move();
    underwaterCar.move();

    car1->repairCar();
    car2->repairCar();

    ford.move();
    flyingCar.move();
    underwaterCar.move();

}