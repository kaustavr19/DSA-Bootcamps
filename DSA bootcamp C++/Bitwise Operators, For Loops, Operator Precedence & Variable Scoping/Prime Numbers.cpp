#include<iostream>
using namespace std;

int main(){
    int n;
    bool isPrime = 1;
    
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for ( int i = 2; i < n ; i++){
        if(n%i == 0){
            cout<<"Not a prime number"<<endl;
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0){
       cout<<"Not a prime number"<<endl; 
    }
    else{
        cout<<"Prime Number"<<endl;
    }
}