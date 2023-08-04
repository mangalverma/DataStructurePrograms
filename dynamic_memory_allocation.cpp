#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

// In C
cout<<"Printing array created by using memory allocation using malloc keyword :"<<endl;
int *p;
p = (int *)malloc(5*sizeof(int));   //usually when we declare variable its memory allocates in stack to allcoate memory in heap we use "malloc" 
for(int i=0;i<4;i++){
    p[i]=2*i;
}

for(int j=0;j<4;j++){
    cout<<p[j]<<endl;
}

cout<<"Printing array created by using memory allocation using new keyword :"<<endl;
// In C++
int *cp;
cp = new int[5]; //In c++ we use new instead of "malloc"
cp[0]=100;
cp[1]=120;
cp[2]=140;
cp[3]=160;
cp[4]=180;

for(int k =0;k<=4;k++){
    cout<<cp[k]<<endl;
}
return 0;
}