/*Q - 4 : Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two 
functions to print the area and perimeter of the rectangle respectively. Its constructor 
having parameters for length and breadth is used to initialize the length and breadth of 
the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor 
having a parameter for its side (suppose s) calling the constructor of its parent class. 
Print the area and perimeter of a rectangle and a square. 
Now repeat the above example to print the area of 10 squares.  
[Hint-Use array of objects] */

#include <iostream>
using namespace std;
class Rectangle {
public:
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    void printArea() {
        cout << "Area: " << length * breadth << endl;
    }

    void printPerimeter() {
        cout << "Perimeter: " << 2 * (length + breadth) << endl;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}

    void printArea() {
        cout << "Area: " << length * length << endl;
    }

    void printPerimeter() {
        cout << "Perimeter: " << 4 * length << endl;
    }
};

int main() {
    Square squares[10] = {
        Square(1), Square(2), Square(3), Square(4), Square(5),
        Square(6), Square(7), Square(8), Square(9), Square(10)
    };

    for (int i = 0; i < 10; i++) {
        //cout << "Square " << i + 1 << ": ";
        squares[i].printArea();
    }
}
