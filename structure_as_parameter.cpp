//Author : Mangal Prasad verma
#include<iostream>
#include<stdio.h>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

//returning structure
struct Rectangle get_rectangle(int length,int width){
    struct Rectangle *r;
    // r = (struct Rectangle *) malloc(sizeof(struct Rectangle));  Applicable for c and c++ both
    r = new Rectangle;  //Applicable for c only
    r->length = length;
    r->breadth = width;
    return *r;
}

//structure parameter using call by value
void rectangle_by_value(struct Rectangle r){
     r.length =10;
     r.breadth = 5;
     cout<<endl;
     printf("Inside Function- width : %d length : %d",r.breadth,r.length);
}

//structure parameter using call by reference
void rectangle_by_refrence(struct Rectangle *r){
        r->length = 10;
        r->breadth = 5;
        cout<<endl;
        printf("Inside Function- width : %d length : %d",r->breadth,r->length);

}


//structure parameter using call by adress
void rectangle_by_address(struct Rectangle r){
     r.length =10;
     r.breadth = 5;
     cout<<endl;
     printf("Inside Function- width : %d length : %d",r.breadth,r.length);
}

int main(){
    struct Rectangle r = get_rectangle(20,10);
    cout <<"Call By Value:"<<endl;
    printf("Outside Function before calling rectangle_by_value - width : %d length : %d",r.breadth,r.length);
    rectangle_by_value(r);
    cout<<endl;
    printf("Outside Function after calling rectangle_by_value - width : %d length : %d",r.breadth,r.length);
    cout<<endl<<endl;

    struct Rectangle s = get_rectangle(10,15);;
    cout <<"Call By Reference :"<<endl;
    printf("Outside Function before calling rectangle_by_refrence - width : %d length : %d",s.breadth,s.length);
    rectangle_by_refrence(&s);
    cout<<endl;
    printf("Outside Function after calling ectangle_by_refrence- width : %d length : %d",s.breadth,s.length);
    cout<<endl<<endl;

    struct Rectangle t = get_rectangle(25,20);
    cout<<"Call by Address :"<<endl;
    printf("Outside Function before calling rectangle_by_address - width : %d length : %d",t.breadth,t.length);
    rectangle_by_refrence(&t);
    cout<<endl;
    printf("Outside Function after calling rectangle_by_address- width : %d length : %d",t.breadth,t.length);
    cout<<endl<<endl;

   
    cout<<endl;
    


}

