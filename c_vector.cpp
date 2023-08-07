#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<10;i+=2){
        v.push_back(i);   //add elemement from the end in vector
    }
    
    //printing vector
    cout<<"vector :";
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";    //accessing the members
    }
    cout<<endl;
    //printing last element of vector
    cout<<"last value of vector :"<<v[v.size()-1]<<endl;
    cout<<"first value of vector:"<<v[0]<<endl;
    cout<<"vector after removing value at 3rd index:";
    v.erase(v.begin()+3);   //erase method to remove value at specific index
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";    //accessing the members
    }
    cout<<endl;
    cout<<"Reversing vector :";
    reverse(v.begin(),v.end());  //reverse function to revert array
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";    //accessing the members
    }
    
    



}