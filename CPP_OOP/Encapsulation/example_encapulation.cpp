#include <iostream>
using std::string;

// Rule1: C++ is private by default.
class Employee{
    private:
        string Name;
        string Company;
        int Age;

    public:

        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }

        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }

        void setAge(int age){
            if(age >= 18){
               Age = age; 
            }
        }
        int getAge(){
            return Age;
        }

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
  
    Employee employee1 = Employee("Tan cc", "Yahoo Singapore", 26);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Wong Meng Meng", "Amazon Singapore", 35);
    employee2.IntroduceYourself();

    employee1.setAge(39);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;


    employee1.setAge(15);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std::endl;

}