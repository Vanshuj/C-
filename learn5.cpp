#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: \n"; /*<< is called insertion operator*/
    cin>>num1;/*>> is extraction operator*/
    cout<<"Enter the value of num2: \n"; /*<< is called insertion operator*/
    cin>>num2;/*>> is extraction operator*/

    cout<<"The sum is "<< num1+num2;

    return 0;
 }