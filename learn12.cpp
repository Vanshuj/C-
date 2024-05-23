#include<iostream>
using namespace std;

int main(){
    // what is pointer?----> data type which holds the adress of otherdata types 

    int a=3;
    int* b = &a;
    // & ---> (Address of) operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
    
    // * ---> Derefrence operator
    cout<<"The  value at address b is"<<*b<<endl;
    return 0;
}