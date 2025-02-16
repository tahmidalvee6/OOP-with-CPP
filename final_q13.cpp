/*Q - 13 : Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has 
two subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with 
the same name that prints "I am an Undergraduate" and "I am a Postgraduate" 
respectively. Call the function by creating an object of each of the three classes. */


#include<iostream>
using namespace std;
class Degree {
    public:
    virtual void getDegree() {
        cout<<"I got a Degree"<<endl;
    }
};
class Undergraduate : public Degree {
    public:
    void getDegree() {
        cout<<"I am an Undergraduate"<<endl;
    }
};
class Postgraduate : public Degree {
    public:
    void getDegree() {
        cout<<"I am an Postgraduate"<<endl;
    }
};

int main() {
    Degree d;
    d.getDegree();

    Undergraduate u;
    u.getDegree();

    Postgraduate p;
    p.getDegree();
}
