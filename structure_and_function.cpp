//Author : Mangal Prasad verma
#include<iostream>
#include<stdlib.h>
using namespace std;


//Structure for rectangle
struct Rectangle{
    int length;
    int breadth;
};

void initialize_rectangle(struct Rectangle *r,int l, int b){
    r->length = l;
    r->breadth = b;

}
//function to calculate perimeter
int perimeter(struct Rectangle r){
    return 2*(r.length+r.breadth);
}


//function to calcualate area
int area(struct Rectangle r){
    return r.length*r.breadth;
}
int main(){
    //In structure and functional programming code is written in form of functions and structure 
    struct Rectangle r = {0,0};
    int length,breadth;
    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;
    initialize_rectangle(&r,length,breadth);
    
    int peri,ar;
    peri = perimeter(r); //calculate perimeter
    ar = area(r); //calculate area
    printf("\nPerimeter: %d\nArea: %d\n",peri,ar);
    return 0;
}