//author : Mangal Prasad Verma

#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5}; //array initialization
    

    cout<<"All element of array :";

    int array_len = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<array_len;i++){                   //printing All array
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"First element of array :";
    cout<<a[0]<<endl; //printing first element of array 
    cout<<"size of array :";
    cout<<sizeof(a)<<endl; //array size  for integer type array each cell is of array size is 4 bytes

    char b[] = {'a','b','c','d','e'};   //initializing character array
    cout<<"All element of character array :";
    int chararray_len = sizeof(b)/sizeof(b[0]);
    for(int i=0;i<chararray_len;i++){                   //printing All array
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"first character of array :";
    cout<<b[0]<<endl;
    cout<<"size of character  array :";
    cout<<sizeof(b)<<endl; //array size  for character type array each cell is of array size is 1 bytes

    return 0;
}