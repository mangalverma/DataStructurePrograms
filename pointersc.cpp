#include<iostream>
using namespace std;

int main(){
    int a = 10; //intializing variable
    int *p; //declaring pointer
    p = &a; //initializing pointer

    cout<<"value using variable : "<<a<<endl;
    cout<<"value using pointer"<<*p<<endl;
    cout<<"address of variable a"<<p<<endl;

    //creating a pointer of array
    int arr[4] = {1,2,3,4};   //array declaration
    int *arr_p;  //declaring pointer
    arr_p = arr; //to assing adress of pointer we domn't need "&" operator i.e. array name act as adress
    
    // arr_p=&arr[0];
    //Note : we can also assign pointer array using arrays first value "arr_p=&arr[0]"

    cout<<"printing array using pointer :"<<endl;
    for (int i =0;i<4;i++){
        cout<<arr_p[i]<<endl;
    }

    return 0;
}
