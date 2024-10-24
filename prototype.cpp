#include<iostream>
using namespace std;

// Function prototype 
//type function-name (arguments);
//int sum(int a, int b);//--->acceptable 
// int sum(int a, b);//---> not acceptable 
int sum(int, int);//--->acceptable
// void g(void); //--->acceptable
void g(); //--->acceptable

int main(){
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"the sum is"<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameter num1 and num2
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nHello good morning";
}