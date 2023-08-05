#include<iostream>
#include<string>
using namespace std;

struct vehicle
{
int wheel;
string color;
};

int main(){

    //creating structure in stack
    struct vehicle v;  //declaring structure
    v.color = "red";  //assigning values to member
    v.wheel = 4;      //assigning values to member

    struct vehicle *p;   //creating structure pointer
    p = &v;               //refrencing adress to pointer

    cout<<"accessing member using structure pointer :"<<endl;
    cout<<"color :"<<(*p).color<<", wheel:"<<(*p).wheel<<endl;  //accessing member using structure pointer
    cout<<"accessing member using structure pointer with arrow notation :"<<endl;
    cout<<"color :"<<p->color<<", wheel:"<<p->wheel<<endl;  //accessing member using structure pointer
    cout<<"accessing member using structure members :"<<endl;
    cout<<"color :"<<v.color<<", wheel:"<<v.wheel<<endl;  //accessing member without pointer
    return 0;
}