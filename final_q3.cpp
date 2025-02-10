/*Q-3: Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two 
functions to print the area and perimeter of the rectangle respectively. Its constructor 
having parameters for length and breadth is used to initialize the length and breadth of 
the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor 
having a parameter for its side (suppose s) calling the constructor of its parent class. 
Print the area and perimeter of a rectangle and a square. */



#include<iostream>
using namespace std;
class Rectangle{
    public:
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() {
        return length * breadth;
    }

    double parameter() {
        return 2 * (length + breadth);
    }
    
};

class Square : public Rectangle {
    public:
    Square(double side) : Rectangle(side, side) {
        
    }
};

int main() {
    Rectangle r(5.0, 3.0);
    cout<<r.area()<<endl;
    cout<<r.parameter()<<endl;

    cout<<endl;

    Square s(4.0);
    cout<<s.area()<<endl;
    cout<<s.parameter()<<endl;
}
