#include <iostream>
using namespace std;

int main() {

    int n, x=0,y=0,z=0,a=0;

    cout << "Enter the number" << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        x += n/100;
        n %= 100;
        cout << x << " 100 Rupee Notes" << endl;
    
    case 2:
        y += n/50;
        n %= 50;
        cout << y << " 50 Rupee Notes" << endl;

    case 3:
        z += n/20;
        n %= 20;
        cout << z << " 20 Rupee Notes" << endl;

    case 4:
        a += n/1;
        n %= 1;
        cout << a << " 1 Rupee Notes" << endl;
 
    default:
        break;
    }
}