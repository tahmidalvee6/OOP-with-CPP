/*Q - 2 : Create a class named 'Member' having the following members:  
Data members 
1 - Name 
2 - Age 
3 - Phone number 
4 - Address 
it also has a function named 'printSalary' which prints the salary of the members. 
Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee' 
and 'Manager' classes have data members 'specialization' and 'department' 
respectively. Now, assign name, age, phone number, address and salary to an 
employee and a manager by making an object of both of these classes and print the 
same. */


#include <iostream>
#include <string>
using namespace std;
class Member {
public:
    string name = "Unknown";
    int age = 0;
    string phoneNumber = "Unknown";
    string address = "Unknown";
    double salary = 0.0;

    Member() {}

    Member(string n, int a, string p, string addr, double s) {
        name = n;
        age = a;
        phoneNumber = p;
        address = addr;
        salary = s;
    }

    void printSalary() {
        cout << "Salary: " << salary << endl;
    }
};

class Employee : public Member {
public:
    string specialization;

    Employee(string n, int a, string p, string addr, double s, string spec) {
        name = n;
        age = a;
        phoneNumber = p;
        address = addr;
        salary = s;
        specialization = spec;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Specialization: " << specialization << endl;
        printSalary();
    }
};

class Manager : public Member {
public:
    string department;

    Manager(string n, int a, string p, string addr, double s, string dept) {
        name = n;
        age = a;
        phoneNumber = p;
        address = addr;
        salary = s;
        department = dept;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        printSalary();
    }
};

int main() {
    Employee emp("John Doe", 30, "123-456-7890", "123 Elm St.", 50000, "Software Engineering");
    Manager mgr("Alice Smith", 45, "987-654-3210", "456 Oak St.", 70000, "HR");

    emp.printDetails();
    cout << endl;
    mgr.printDetails();

    return 0;
}
