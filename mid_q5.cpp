/*Q5: Write a program to print the area of two rectangles having sides (4, 5) and (5, 8) respectively by creating a class named 'Rectangle' with 
a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor*/

#include<bits/stdc++.h> 
using namespace std; 
class Rectangle{ 
public: 
    double a,b; 
    Rectangle(double a1, double b1) { 
        a = a1; 
        b = b1; 
    } 
    void recarea() { 
        double area = a * b; 
        cout<<area<<endl; 
    } 
}; 
int main() { 
    Rectangle r1(4,5), r2(5,8); 
    r1.recarea(); 
    r2.recarea(); 
}
