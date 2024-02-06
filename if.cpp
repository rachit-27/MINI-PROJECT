#include<iostream>
using namespace std;

int main(){
     int a,b;

     cout<<"Value of a is:";
     cin>>a;
     cout<<"Value of b is:";
     cin>>b;
    
    // if(a>0){
    //     cout<<"A is positive";
    // }
    // else{
    //     cout<<"A is negative";
    // }
    // return 0;
    if(a>b){
        cout<<"Value of a is greater than b";
    }
    else{
        cout<<"Value of b is greater than a";
    }
    return 0;
}