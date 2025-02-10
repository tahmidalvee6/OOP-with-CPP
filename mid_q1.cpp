/*Q - 1: Create a class named 'Student' with a string variable 'name' and an integer variable 
'roll_no'. Assign the value of roll_no as '2' and that of name as "Jamshed" by creating 
an object of the class Student.*/

#include<iostream>
using namespace std;
class Student {
public :
    string name;
    int roll;
};
int main()  {
    Student s1;
    s1.name = "Jamshed";
    s1.roll = 2;

    cout<<s1.name<<" "<<s1.roll<<endl;
}
