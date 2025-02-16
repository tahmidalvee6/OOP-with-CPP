/* Q - 13 : Create a class 'Student' with three data members which are name, age and address. The 
constructor of the class assigns default values to name as "unknown", age as '0' and 
address as "not available". It has two functions with the same name 'setInfo'. First 
function has two parameters for name and age and assigns the same whereas the second 
function takes has three parameters which are assigned to name, age and address 
respectively. Print the name, age and address of 10 students. 
[Hint - Use array of objects] */

#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int age;
    string address;

    Student() {
        name = "unknown";
        age = 0;
        address = "not available";
    }

    void setInfo(string n, int a) {
        name = n;
        age = a;
    }

    void setInfo(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    Student students[10];
    
    students[0].setInfo("John", 20, "123 Street");
    students[1].setInfo("Alice", 21, "456 Avenue");
    students[2].setInfo("Bob", 22, "789 Boulevard");
    students[3].setInfo("Charlie", 23, "101 Road");
    students[4].setInfo("David", 24, "202 Lane");
    students[5].setInfo("Eve", 25, "303 Drive");
    students[6].setInfo("Frank", 26, "404 Place");
    students[7].setInfo("Grace", 27, "505 Parkway");
    students[8].setInfo("Hannah", 28, "606 Crescent");
    students[9].setInfo("Ivy", 29, "707 Square");

    for (int i = 0; i < 10; i++) {
        students[i].printInfo();
    }
}
