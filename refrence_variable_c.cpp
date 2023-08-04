#include<iostream>
using namespace std;

int main(){

    int a = 10; // declared and initialize of integer type array
    int &r = a ; //refrencing variable a to r 
    cout<<"value of 'a' : "<<a<<endl;
    cout<<"value of 'r' :"<<r<<endl;
    a = 20; //changed value of "a"
    cout<<"changed value of 'a' : "<<a<<endl;
    cout<<"changed value of 'r' because value of 'a' changed :"<<r<<endl;

    //trying copy variable without refrence
    int b = 10;
    int c = b;
    cout<<"value of b :"<<b<<endl;
    cout<<"value of c :"<<c<<endl;
    b=20;
    cout<<"change value of 'b' :"<<b<<endl;
    cout<<"value of c not change because c is on diffrent adress:"<<c<<endl;
    return 0;



}