/*Q - 2 : Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 
units by creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include<bits/stdc++.h>
using namespace std;
class Triangle {
public:
    double a,b,c;

    void areapara() {
        double s = ((a+b+c)/2);
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double parameter = a + b + c;

        cout<<area<<" "<<parameter<<endl;
    }
};
int main() {
    Triangle t;

    t.a = 3;
    t.b = 4;
    t.c = 5;

    t.areapara();

}
