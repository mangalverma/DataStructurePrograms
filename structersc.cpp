//Author : Mangal Prasad verma
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main(){
    struct rectangle r1;  //declaring structre
    r1.length = 10;  //setting member length value
    r1.breadth = 5;  //setting member breadth value
    cout<<"length :"<<r1.length<<endl; //accessing structure members
    cout<<"breadth :"<<r1.breadth<<endl; //accessing structure members

    struct rectangle r2 = {15,10};  //declaring and initializing arrays
    cout<<"length :"<<r2.length<<endl;
    cout<<"breadth :"<<r2.breadth<<endl;
    
    struct rectangle r[4];  //declaring structure array
    int arr_len = sizeof(r)/sizeof(r[0]);
    for(int i=0;i<arr_len;i++){
        r[i].length = i*3;
        r[i].breadth = i*2;
    }
    cout<<"length : "<<r[1].length<<endl;
    cout<<"breadth : "<<r[1].breadth<<endl;

}