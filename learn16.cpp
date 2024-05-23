#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//call by reference using pointers
void swapPointer(int* a, int* b){//temp a b
    int temp = *a;      //4   4  5
    *a = *b;             //4   5  5
    *b = temp;          //4   5   4
}

//call by reference using C++ refrence variables
// int & swapRefrenceVar(int& a, int& b){//temp a b
void swapRefrenceVar(int& a, int& b){//temp a b
    int temp = a;      //4   4  5
    a = b;             //4   5  5
    b = temp;          //4   5   4
    // return a;
}

int main(){
    int a =4, b =5;
    // cout<<"The sum of 4 and 5 is"<<sum(a, b);
    cout<<"The value of a is "<<a<<"and the value of b is"<<b<<endl;
    // swap(a, b); this will not swap a and b
    //swapPointer(&a, &b);//this will swap a and b using pointer refrence
    swapRefrenceVar(a, b);//this will swap a and b using refrence variable
    // swapRefrenceVar(a, b)=766;//this will swap a and b using refrence variable
    cout<<"The value of a is "<<a<<"and the value of b is"<<b<<endl;
    return 0;
}