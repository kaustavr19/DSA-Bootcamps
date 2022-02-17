#include<iostream>
using namespace std;

int sumofArr(int arr[], int size){

    int  sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    cout << "The sum of array elements are: " << sum << endl;
    return 0;
}

int main(){
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[100];

    //enter array elements
    for( int i = 0; i < size; i++){
        cout << "Enter element number " << i << ":" << endl;
        cin >> arr[i];
    }

    sumofArr(arr, size);
    return 0;
}