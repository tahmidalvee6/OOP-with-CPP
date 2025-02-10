/*07: Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of 
its length and breadth as parameters of its constructor and having a function named 'returnArea" which 
returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include<bits/stdc++.h> 
using namespace std; 
class Area { 
public: 
    double length, width; 

    Area(double a1, double b1) { 
        length = a1; 
        width = b1; 
    } 

    double getarea() { 
        return length * width; 
    } 
}; 
int main() {
    double length, width; 
    cin>>length>>width; 
    Area a(length, width); 
    cout<<a.getarea()<<endl; 
}
