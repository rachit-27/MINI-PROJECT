#include<iostream>
using namespace std;

int main(){  
    int n,a=0,b=1;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    return 0;
}