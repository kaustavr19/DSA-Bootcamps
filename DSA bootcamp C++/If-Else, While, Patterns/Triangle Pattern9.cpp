#include<iostream>
using namespace std;

int main(){
    int n, row=1;

    cout<<"Enter no. of rows: "<<endl;
    cin>>n;

    while(row<=n){
        int col=1;
        char start = ('A'+n-row);
        while (col<=row)
        {
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}