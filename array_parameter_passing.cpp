
//Author : Mangal Prasad Verma
#include<iostream>
#include<stdlib.h>
using namespace std;

//function to return array of given length 
int * get_arr(int arr_len){
    int *arr;
    arr = (int *)malloc(arr_len*sizeof(int));
    for(int i = 0;i<arr_len;i++){
        arr[i]=2*i;
    }
    return arr;


}

//function to take integer array as parameter and return sum of its values
int get_array_sum(int arr[],int arr_len){
    int sum = 0;
    /* 
    int arr_len1 = sizeof(arr)/sizeof(int);
    Note : we can calculate size of array inside a function because 
    when we are passing array through parameter it is consider as pointer and 
    pointer size is of 8 bytes
     */

    for(int i=0;i<arr_len;i++){
        sum+=arr[i];
    }
    return sum;

}

int main(){
    int *arr;
    arr = get_arr(5);   //calling function to get integer array of  5 length  
    cout << "Returned array :";
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int arr_sum = 0;
    arr_sum = get_array_sum(arr,5); //passing array as parameter
    cout<<"sum of returned array :"<<arr_sum<<endl;
    
}