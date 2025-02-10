/*Q - 10 : Create a class named 'PrintNumber' to print various numbers of different datatypes by 
creating different functions with the same name 'printn' having a parameter for each 
datatype.*/

#include<bits/stdc++.h>
using namespace std;
class PrintNumber{
    public:
    void printn(int n) {
        cout<<n<<endl;
    } 

    void printn(float n) {
        cout<<n<<endl;
    } 

    void printn(double n) {
        cout<<n<<endl;
    } 

    void printn(char n) {
        cout<<n<<endl;
    } 
    void printn(string n) {
        cout<<n<<endl;
    } 

};
int main() {
    PrintNumber p;
    p.printn(7);
    p.printn(2.312455);
    p.printn(2.3242349823423);
    p.printn('A');
    p.printn("Siuuuuuuuuuuuuuuuuuuuu");
}
