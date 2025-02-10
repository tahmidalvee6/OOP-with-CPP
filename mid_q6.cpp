/*Q6: Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First
function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named 
as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard*/

#include<bits/stdc++.h> 
using namespace std; 
class Area { 
public: 
    double length, width; 

    void setDim(double a1, double b1) { 
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
    Area a; 
    a.setDim(length, width); 
    cout<<a.getarea()<<endl; 
}
