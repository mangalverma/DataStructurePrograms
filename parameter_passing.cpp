//Author : Mangal Prasad verma
#include<iostream>
using namespace std;

//function to swap value by "call by value" method
void swap_by_value(int a,int b){  
    int tmp;
    tmp  = a;
    a = b;
    b = tmp;
    cout << "Inside function : a(num1) = "<<a<<", b(num2) = "<<b<<endl;
}

//function to swap value by "call by address" method
void swap_by_address(int *a,int *b){
    int tmp;
    tmp  = *a;
    *a = *b;
    *b = tmp;
    cout << "Inside function : a(num1) = "<<*a<<", b(num2) = "<<*b<<endl;
}

//function to swap value by "call by reference" method
void swap_by_reference(int &a,int &b){
    int tmp;
    tmp  = a;
    a = b;
    b = tmp;
    cout << "Inside function : a(num1) = "<<a<<", b(num2) = "<<b<<endl;
}


int main(){
    int num1 = 10;
    int num2 = 20;
   //calling function by "call by value " method
    cout << "Call By Value - "<<endl;
    cout<<"Before Swapping : num1 = "<<num1<<", num2 = "<<num2<<endl;
    swap_by_value(num1,num2);
    cout<<"After Swapping : num1 = "<<num1<<", num2 = "<<num2<<" //Actual value remain same and formal value changed only"<<endl<<endl;

    //calling function by "call by address " method
    num1 = 10;
    num2 = 20;
    cout << "Call By Address - "<<endl;
    cout<<"Before Swapping : num1 = "<<num1<<", num2 = "<<num2<<endl;
    swap_by_address(&num1,&num2);
    cout<<"After Swapping : num1 = "<<num1<<", num2 = "<<num2<<" //Actual value and formal value both changed"<<endl<<endl;
    
    //calling function by "call by reference " method
    num1 = 10;
    num2 = 20;
    cout << "Call By Reference - "<<endl;
    cout<<"Before Swapping : num1 = "<<num1<<", num2 = "<<num2<<endl;
    swap_by_reference(num1,num2);
    cout<<"After Swapping : num1 = "<<num1<<", num2 = "<<num2<<" //Actual value and formal value both changed"<<endl<<endl;




}