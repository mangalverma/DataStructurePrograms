//Author : Mangal Prasad Verma


#include<iostream>
using namespace std;

//Natural number sun using Recursion
//Time Complexity = O(n)
//Space Complexity = O(n)
int recursion_sum(int n){
    if (n==0) return 0;
    else return recursion_sum(n-1)+n;
}

//Sum using Loop
//Time Complexity = O(n)
//Space Complexity = O(1)
int loop_sum(int n){
    int i,sum=0 ;
    for(i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

//Sum using AP formula
//Time Complexity = O(1)
//Space Complexity = O(1)
int formula_sum(int n){
    return n*(n+1)/2;
}

int main(){
    int n_sum ;
    int n = 10;
    printf("Sum using Recursion : ");
    n_sum = recursion_sum(n);
    printf("%d \n",n_sum);

    printf("Sum using Loop : ");
    n_sum = loop_sum(n);
    printf("%d \n",n_sum);

    printf("Sum using AP formula : ");
    n_sum = formula_sum(n);
    printf("%d",n_sum);


}