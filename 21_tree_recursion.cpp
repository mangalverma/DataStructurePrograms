//Author : Mangal Prasad Verma
//tree recursion :  if a recursive function calling itself for more than one time then it's known as Tree Recursion

#include<iostream>
using namespace std;
void func(int n){
    if(n>0){
    printf("%d ",n);
    func(n-1); //more than 2 recursion
    func(n-1);
    }
}

int main(){
    func(3);
}