#include <iostream>
using std::string;

// Rule1: C++ is private by default.
class Employee{
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourself(){
            std::cout << "Name - "<< Name << std::endl;
            std::cout << "Company - "<< Company << std::endl;
            std::cout << "Age - "<< Age << std::endl;

        }

        // Constructor
        // Rule 1: Does not have return type.
        // Rule 2: Have the same name as class.
        // Rule 3: Constructor is mostly set to public.

        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
};

int main(){
  
    // Employee employee1 ; // w/o constructor
    // employee1.Name = "Tan cc";
    // employee1.Company = "Yahoo Singapore";
    // employee1.Age = 26;

    Employee employee1 = Employee("Tan cc", "Yahoo Singapore", 26);

    employee1.IntroduceYourself();

    Employee employee2 = Employee("Wong Meng Meng", "Amazon Singapore", 35);
    // employee2.Name = "Wong Meng Meng";
    // employee2.Company = "Amazon Singapore";
    // employee2.Age = 35;
    employee2.IntroduceYourself();

}