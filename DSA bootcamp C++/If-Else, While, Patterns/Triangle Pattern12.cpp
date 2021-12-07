#include<iostream>
using namespace std;

int main(){
    int n, row=1;

    cout<<"Enter no. of rows: "<<endl;
    cin>>n;

    while(row<=n){
        int space = row-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int col=row;
        while (col<=n)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}