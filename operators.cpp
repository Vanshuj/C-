// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programer 
// #incled"this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the type of operator in C++"<<endl;
    // Arithmetic operators
    cout<<"The  value of a + b is "<<a+b<<endl;
    cout<<"The  value of a - b is "<<a-b<<endl;
    cout<<"The  value of a * b is "<<a*b<<endl;
    cout<<"The  value of a / b is "<<a/b<<endl;
    cout<<"The  value of a % b is "<<a%b<<endl;
    cout<<"The  value of a ++ is "<<a++<<endl;
    cout<<"The  value of a -- is "<<a--<<endl;
    cout<<"The  value of ++a is "<<++a<<endl;
    cout<<"The  value of --a is "<<--a<<endl;
    // Assignment operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d'

    // comparison operators 
    cout<<"Following are the comparison operators im C++"<<endl;
    cout<<"The  value of a==b is "<<(a==b)<<endl;
    cout<<"The  value of a!=b is "<<(a!=b)<<endl;
    cout<<"The  value of a>=b is "<<(a>=b)<<endl;
    cout<<"The  value of a<=b is "<<(a<=b)<<endl;
    cout<<"The  value of a>b is "<<(a>b)<<endl;
    cout<<"The  value of a<b is "<<(a<b)<<endl;
    
    // Logical operator
    cout<<"Following are the Logical operators im C++"<<endl;
    cout<<"The  value of this Logical and operators ((a==b) && (a<b) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The  value of this Logical or operators ((a==b) || (a<b) is:"<<((a==b)||(a<b))<<endl;cout<<"The  value of this Logical not operators (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;
}