#include<iostream>
using namespace std;

int main(){
    int n, row=1;

    cout<<"Enter no of rows: "<<endl;
    cin>>n;

    int val = row;
    while(row<=n){
        int col=1;
        while (col<=row)
        {
            cout<<val;
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}