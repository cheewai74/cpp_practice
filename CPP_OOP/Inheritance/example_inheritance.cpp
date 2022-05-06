#include <iostream>
using std::string;

// Step 1: Create an abstract class
class AbstractEmployee{

    // Make it arbitrary via setting it to virtual
    // We have implemented a contract.
    virtual void AskForPromotion() = 0;

};

// Step 2: Employee sign a contract to use AskForPromotion method in AbstractEmployee.
//         Add " :AbstractEmployee          
class Employee:AbstractEmployee{
    private:
        // string Name;
        string Company;
        int Age;
    protected:
        string Name;
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

        // Step 3: Implement the virtual method
        void AskForPromotion(){
            if(Age>30)
                std::cout << Name << " got promoted!" << std::endl;
            else
                std::cout << Name << ", sorry NO promotion for you!" << std::endl;
        }
};

// Developer: child class, sub class
// Employee: base class, super class

// Note: Inheritance is private by default
// class Developer:Employee {

// In order to access the AskForPromotion(), make inherited  Employee to public
class Developer:public Employee {
    public:
        string FavProgrammingLanguage;

        Developer(string name, string company, int age, string favprogramminglanguage)
            :Employee(name, company, age)
            {
                FavProgrammingLanguage = favprogramminglanguage;
            }

        void FixBug(){
            // std::cout << getName() <<" fixed bug using " << FavProgrammingLanguage << std::endl;
            
            // Set Name to protected.
            std::cout << Name <<" fixed bug using " << FavProgrammingLanguage << std::endl;
        }
};

class Teacher:public Employee{
    public:
        string Subject;
        void PrepareLesson(){
            std::cout << Name <<" is preparing  " << Subject << "lesson" << std::endl;
        }

        Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age){
            Subject = subject;
        }
};

int main(){
  
    Developer d = Developer("Tan cc", "Yahoo Singapore", 26, "c++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack","Cool School",35,"History ");
    t.PrepareLesson();
    t.AskForPromotion();
}