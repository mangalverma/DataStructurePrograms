#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
 int length;
 int width;
};

int main(){
    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle)); //In C and CPP :alllocating memory in heap  for structure 
    // p = new rectangle; //In CPP :alllocating memory in heap  for structure 
    p->length = 10;
    p->width = 5;
    cout<<"accessing member using structure pointer :"<<endl;
    cout<<"length :"<<(*p).length<<", width:"<<(*p).width<<endl;  //accessing member using structure pointer
    cout<<"accessing member using structure pointer with arrow notation :"<<endl;
    cout<<"length :"<<p->length<<", width:"<<p->width<<endl;  //accessing member using structure pointer
    return 0;


}