#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    //In monlithic programming everything is written inside main function
    int length=0,breadth=0;
    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;
    int peri,area;
    peri = 2*(length+breadth); //calculate perimeter
    area = length*breadth; //calculate area
    printf("\nPerimeter: %d\nArea: %d\n",peri,area);
    return 0;
}