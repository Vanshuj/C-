#include<iostream>
using namespace std;

int main(){
    // int row, col;

    // cin>>row>>col;

// rectangle

    // for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //holow rectangle

    // for(int i=1; i<=row; i++){
    //     for(int j=1; j<=col; j++){
    //         if(i==1 || i==row || j==1 || j==col){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //inverted half pyramid

    int n;
    cin>>n;

    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // half pyramid after 180deg rotation

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //floyds triangle

    // int count=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //butterfly pattern

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     int space= 2*n-2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    //     for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     int space= 2*n-2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }      //error

// inverted pattern

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    
    return 0;
}