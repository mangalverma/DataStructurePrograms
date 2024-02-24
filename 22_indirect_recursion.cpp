//Author : Mangal Prasad Verma
//Indirect Recursion : At least two functions that call each other repeatedly in a cycle constitute indirect 
//recursion

#include<iostream>
using namespace std;

void funB(int n);

void funA(int n){
    if(n>0){
        printf("%d ",n); //calling funB
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        printf("%d ",n); // calling funA
        funA(n/2);
    }
}


int main(){
 int n = 20;
 funA(20);
}