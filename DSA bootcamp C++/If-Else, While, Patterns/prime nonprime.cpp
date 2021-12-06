#include<iostream>
using namespace std;

int main(){
    int n, i=2;
    cout<<"Enter a number to check if its Prime or Non-prime: "<<endl;
    cin>>n;

    while(i<n){
        if(n%i==0){
            cout<<"Non-prime for "<<i<<endl;
        }
        else{
            cout<<"Prime for "<<i<<endl;
        }
        i++;
    }
    return 0;
}