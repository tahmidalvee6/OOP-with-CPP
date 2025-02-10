/*Q - 7 : Create a class named 'Rectangle' with two data members- length and breadth and a 
function to calculate the area which is 'length*breadth'. The class has three constructors 
which are:  
1 - having no parameter - values of both length and breadth are assigned zero. 
2 - Having two numbers as parameters - the two numbers are assigned as length and  
breadth respectively. 
3 - Having one number as parameter - both length and breadth are assigned that number. 
Now, create objects of the 'Rectangle' class having none, one and two parameters and 
print their areas. */

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length, breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b)  {
        length = l;
        breadth = b;
    }

    Rectangle(int x) {
        length = x;
        breadth = x;
    }

    void display() {
        int area = length * breadth;
        cout<<area<<endl;
    }
};
int main() {
    Rectangle r1;
    r1.display();

    Rectangle r2(3,4);
    r2.display();

    Rectangle r3(4);
    r3.display();
}
