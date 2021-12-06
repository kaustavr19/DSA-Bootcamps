#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    //char ch='A';

    cout<<"Enter no of rows: "<<endl;
    cin>>n;

    while(row<=n){
        int col=1;
        while (col<=row)
        {
            char ch = ('A'+row-1);
            cout<<ch;
            col++;
        }
        //ch++;
        cout<<endl;
        row++;
    }
    return 0;
}