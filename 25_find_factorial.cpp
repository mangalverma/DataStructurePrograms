// Author : Mamgal Prasad Verma

#include<iostream>
using namespace std;

//Find Factorial using recursion 
//Time Complexity = O(n)
//Space Complexity = O(n)
int rec_fact(int n){
    if (n<=1) return 1;
    else return rec_fact(n-1)*n;
}

//Find Factorial using loop 
//Time Complexity = O(n)
//Space Complexity = O(1)
int loop_fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n=3;
    printf("Factorial using Recursion : ");
    printf("%d\n",rec_fact(n));

    printf("Factorial using Loop : ");
    printf("%d\n",loop_fact(3));
}