#include<iostream>
using namespace std;

int main(){
    int i, num, sum = 0;
    cout<<"Enter the upper limit: "<<endl;
    cin>>num;

    for ( i = 1; i <= num ; i++){
        sum += i;
    }

    cout<<"The sum is: "<<sum;
}