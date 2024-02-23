//Author : Mangal Prasad Verma
// Recursion :-any function that happens to call itself again and again (directly or indirectly), unless the program
// satisfies some specific condition/subtask is called a recursive function

#include<iostream>
using namespace std;

void func1(int n){
    if(n>0){
    printf("%d ",n);
    func1(n-1);}  //function call itself 
  }

int main(){
  int n = 10;
  func1(n);
  return 0;
}