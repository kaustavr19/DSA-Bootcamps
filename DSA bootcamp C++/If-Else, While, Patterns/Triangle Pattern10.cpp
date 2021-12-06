#include<iostream>
using namespace std;

int main(){
    int n, row=1;

    cout<<"Enter no. of rows: "<<endl;
    cin>>n;

    while(row<=n){
        
        //space printing
        int space = (n-row);
        while (space)
        {
            cout<<" ";
            space--;
        }

        //star print
        int col=1;
        while (col <= row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}