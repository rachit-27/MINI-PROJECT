#include<iostream>
using namespace std;

bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
// changes made 
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(prime(n)){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;   
    }
    return 0;
}