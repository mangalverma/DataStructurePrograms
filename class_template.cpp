#include<iostream>
using namespace std;

template<class T>  //declaring template class to make Arithmetic class generic
class Arithmetic{
    private :
        T a;
        T b;
    public :
        Arithmetic();
        Arithmetic(T a,T b);
        T sum();  
        T sub();
        ~Arithmetic();
};

template<class T>   //declaring template class to make class Arithmetic method generic
Arithmetic<T>::Arithmetic(T a,T b){
            this->a = a;
            this->b = b;
        } 

template<class T> //declaring template class to make class Arithmetic method generic
T Arithmetic<T>::sum(){
    return this->a +this->b;
}

template<class T>   //declaring template class to make Arithmetic method generic
T Arithmetic<T>::sub(){
    return this->a - this->b;
}

int main(){
    int a = 10.0,b=20.0;
    Arithmetic<float>arr(a,b); //creating object of class Arithmetic of float type
    cout<<"Sum of Two numbers of float type :"<<arr.sum()<<endl;

    int c=10,d=12;
    Arithmetic<int>arr1(c,d);   //creating object of class Arithmetic of int type
    cout<<"Subtraction of Two numbers of integer type :"<<arr.sub()<<endl;


}
