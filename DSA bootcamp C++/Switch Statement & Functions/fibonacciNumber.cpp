#include <iostream>
using namespace std;

int fibonacci(int a){
    int b=0,c=1,ans;
    for(int i=3; i<=a; i++){
    ans=b+c;
    b=c;
    c=ans;
 }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter value of n to find nth term of fibonacci series"<<endl;
    cin>>n;
    cout<<"The nth term of fibonacci series is: "<<fibonacci(n);
}