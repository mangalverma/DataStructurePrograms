//Author : Mangal Prasad Verma
//Nested Recursion : In Nested recursion, the recursive function will pass the parameter as a recursive call

#include <iostream>
using namespace std;

int func1(int n){
    printf("%d ",n);
    if(n>100){
        return n-10;
    }
    else{
        return func1(func1(n+11));
    }
}

int main(){
    func1(95);
}