//Author : Mangal Prasad verma
#include<iostream>
using namespace std;

int add(int a,int b){ //declaring function
    int c;
    c = a+b; //function to add two numbers
    return c; //return value of integer type
}

int main(){
    int num1,num2,sum;
    num1=10;
    num2=15;
    sum = add(num1,num2); //calling function 
    cout<<"sum of "<<num1<< " and "<<num2<<"="<<sum<<endl;

    return 0;
}