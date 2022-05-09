#include <iostream>
using namespace std;

class Shape {

    protected:

        float width, height;

    public:

        Shape(float a=0.0, float b=0.0){
            width = a;
            height = b;
        };

        void area(){
            cout << "Shape class area: "<< 0 << endl;
        };
};

class Rectangle : public Shape{

    public:
        Rectangle(float a=0.0, float b=0.0):Shape(a,b){};

        void area(){
            cout << "Rectangle class area: "<< (width*height) << endl;
        };
};

class Triangle : public Shape{

    public:
        Triangle(float a=0.0, float b=0.0):Shape(a,b){};

        void area(){
           cout << "Triangle class area: "<< ((width*height)/2) << endl;
        };
};

int main(){

    Shape* shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // Store the address of the Rectangle
    shape = &rec;
    // Call rectangle area
    shape->area();

    // Store the address of the Triangle
    shape = &tri;
    // Call triangle area
    shape->area();

    return 0;
}