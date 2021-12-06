#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    //char start='A';

    cout<<"Enter no of rows: "<<endl;
    cin>>n;

    while(row<=n){
        int col=1;
        while (col<=n)
        {
            char ch = 'A'+row+col-2;
            cout<<ch;
            col++;
        }
        //start++;
        cout<<endl;
        row++;
    }
    return 0;
}