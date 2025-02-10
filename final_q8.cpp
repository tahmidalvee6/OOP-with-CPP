/*Q - 8 : Suppose you have a Bank with an initial amount of $50 and you have to add some more 
amount to it. Create a class 'AddAmount' with a data member named 'amount' with an 
initial value of $50. Now make two constructors of this class as follows: 
a. without any parameter - no amount will be added to the  Bank 
b. Having a parameter which is the amount that will be added to the Bank 
Create an object of the 'AddAmount' class and display the final amount in the 
Bank. */

#include<iostream>
using namespace std;
class AddAmount{
    public:
    int amount;

    AddAmount() {
        amount = 50;
    }

    AddAmount(int add) {
        amount = 50 + add;
    }

    void display() {
        cout<<amount<<endl;
    }

};
int main() {
    AddAmount a1;
    a1.display();

    AddAmount a2(30);
    a2.display();
}
