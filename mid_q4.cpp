/*Q4: Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units 
by creating a class named "Triangle' with the constructor having the three sides as its parameters. */

#include<bits/stdc++.h> 
using namespace std; 
class Triangle { 
public: 
    double a,b,c; 
    Triangle (double a1, double b1, double c1) { 
        a = a1; 
        b = b1; 
        c = c1; 
    } 
    void areapara() { 
        double s = (a + b + c) / 2; 
        double area = sqrt(s*(s-a)*(s-b)*(s-c)); 
        double parameter = a + b + c; 
        cout<<area<<" "<<parameter<<endl; 
    } 
}; 
int main() { 
    Triangle t(3,4,5); 
    t.areapara(); 
}
