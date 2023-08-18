//Author : Mangal Prasad verma
#include<iostream>
#include<stdlib.h>
using namespace std;


//Class for rectangle
class Rectangle{
private:
    int length;
    int breadth;

public:
// constructor to initilialize rectangle values
    void Rectanlge(){
        length = 0;
        breadth = 0;

    }
// Method to set the length of rectangle
    void set_length(int l){
        length = l;
    }
//Method to set the breadth of rectancle
    void set_breadth(int b){
        breadth = b;
    }
//Method to calculate perimeter
    int perimeter(){
        return 2*(length+breadth);
    }


    //class method to calcualate area
    int area(){
        return length*breadth;
    }

};

int main(){
    //In structure and functional programming code is written in form of functions and structure . 
    // Note ;- Not possible in C
    int length,breadth;
    cout<<"Enter length and breadth : ";
    cin>>length>>breadth;
    Rectangle r;
    r.set_length(length);
    r.set_breadth(breadth);
    int peri,ar;
    peri = r.perimeter(); //calculate perimeter
    ar = r.area(); //calculate area
    printf("\nPerimeter: %d\nArea: %d\n",peri,ar);
    return 0;
}