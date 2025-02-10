/*Q3: Assign and print the roll number, phone number and address of two students 
having names "Shofi" and "Jamshed" respectively by creating two objects of the class 'Student'.*/

#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int roll;
    string phone;
    string address;
};
int main() {
    Student s1, s2;

    s1.name = "Shofi";
    s1.roll = 2;
    s1.phone = "018327283403";
    s1.address = "Dhaka";

    s2.name = "Jamshed";
    s2.roll = 3;
    s2.phone = "0183272353403";
    s2.address = "Chittagong";

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.phone<<" "<<s1.address<<endl;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.phone<<" "<<s2.address<<endl;
  
}
