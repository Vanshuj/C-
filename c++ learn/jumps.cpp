#include<iostream>
using namespace std;

int main(){
    // int pocketmoney=3000;
    // for(int date=1; date<=30; date++){
    //     if(date%2==0){
    //         continue;
    //     }
    //     if(pocketmoney==0){
    //         break;
    //     }
    //     cout<<"go out today"<<endl;
    //     pocketmoney==pocketmoney-300;
    // }

    //prime number
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
        }
    }

    cout<<"Prime"<<endl;
    return 0;
}