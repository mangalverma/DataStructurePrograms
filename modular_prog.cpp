//Author : Mangal Prasad verma
#include<iostream>
#include<stdlib.h>
using namespace std;

//function to calculate perimeter
int perimeter(int length,int breadth){
    return 2*(length+breadth);
}


//function to calcualate area
int area(int length,int breadth){
    return length*breadth;
}
int main(){
    //In modular programming code is written in form of functions
    int length=0,breadth=0;
    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;
    int peri,ar;
    peri = perimeter(length,breadth); //calculate perimeter
    ar = area(length,breadth); //calculate area
    printf("\nPerimeter: %d\nArea: %d\n",peri,ar);
    return 0;
}