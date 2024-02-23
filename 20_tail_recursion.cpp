// Author : Mangal Prasad Verma
// Tail Recursion :  If a function is calling itself and that recursive call is the last statement in a 
//function then it is called tail recursion. After that call there is nothing, it is not performing anything,
// so, it is called tail recursion.

#include<iostream>
using namespace std;

void func1(int n){
    if(n>0){
        printf("%d ", n);
        func1(n-1); //function call done at the end of all statement 
    }
}

int main(){
    int n = 10;
    func1(n);
}



