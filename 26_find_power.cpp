//Author : Mangal Prasad Verma

#include<iostream>
using namespace std;

//Find Power using recursion [linear approach]
//Time Complexity = O(n)
//Space Complexity = O(n)
int rec_pow1(int m,int n){
    if (n==0) return 1;
    else return rec_pow1(m,n-1)*m;

}

//Find Power using recursion [optimized approach]
//Time Complexity = O(logn)
//Space Complexity = O(logn)
int rec_pow2(int m,int n){
    if (n==0) return 1;
    if (n%2==0) return rec_pow2(m*m,n/2);
    else return m*rec_pow2(m*m,(n-1)/2);
}

//Find Power using loop [optimized approach]
//Time Complexity = O(logn)
//Space Complexity = O(1)
int loop_pow2(int m,int n){
    int res=1 ;
    while(n!=0){
        if (n%2!=0){
            res = res*m;
        }
        m = m*m;
        n = n/2;
    }
    return res;
   
}

int main(){
    int m=3,n=0;
    printf("Sum using linear recursion approach [linear approach] : ");
    printf("%d\n",rec_pow1(m,n));

    printf("Sum using linear recursion approach [optimized approach] : ");
    printf("%d\n",rec_pow2(m,n));

    printf("Sum using loop approach [optimized approach] : ");
    printf("%d\n",loop_pow2(m,n));
}