#include<iostream>
using namespace std;

bool isEven(int a){

    if(a&1){
        return 0;
    }

    return 1;
}

int main(){
    int num;
    cout << "Enter a number to check even odd: " << endl;
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }


    return 0;
}