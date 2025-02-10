/*Q - 12 :Create a class to print the area of a square and a rectangle. The class has two functions 
with the same name but different number of parameters. The function for printing the 
area of rectangle has two parameters which are its length and breadth respectively while 
the other function for printing the area of square has one parameter which is the side of 
the square. */

#include<iostream>
using namespace std;
class Cls{
    public:
    void display(int l, int b) {
        cout<<l*b<<endl;
    }

    void display(int n) {
        cout<<n*n<<endl;
    }
};
int main() {
    Cls c;

    c.display(3,4);
    c.display(4);
}
