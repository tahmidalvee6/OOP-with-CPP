/*Q - 11 : Create a class to print an integer and a character using two functions having the same 
name but different sequence of the integer and the character parameters. 
For example, if the parameters of the first function are of the form (int n, char c), then 
that of the second function will be of the form (char c, int n). */


#include<iostream>
using namespace std;
class Cls{
    public:
    void display(int n, char c) {
        cout<<n<<" "<<c<<endl;
    }

    void display(char c, int n) {
        cout<<c<<" "<<n<<endl;
    }
};
int main() {
    Cls c;
    c.display(7,'A');
    c.display('A',7);
}
