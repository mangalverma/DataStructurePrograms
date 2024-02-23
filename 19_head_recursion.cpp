//Author : Mangal Prasad Verma
// Head Recursion : - If a recursive function calling itself and that recursive call is the first statement
// in the function

#include<iostream>
using namespace std;

void func1(int n){
    if (n>0){
    func1(n-1); // at first recursive function should call 
    printf("%d ",n);
    }

}

int main(){
    func1(10);
}
