#include<iostream>
using namespace std;

int main(){
    int term, first = 0, second = 1, nextNum;
    cout<<"Enter number of terms: "<<endl;
    cin>>term;

    cout<<"The Fibonacci series is: "<<endl;

    for(int i = 1; i <= term; i++){
        nextNum = first + second;
        cout << nextNum <<endl;

        first = second;
        second = nextNum;
    }
}