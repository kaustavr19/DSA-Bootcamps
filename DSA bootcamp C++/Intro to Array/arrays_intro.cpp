#include<iostream>
using namespace std;

//HOLD
void printArray(int arr[], int size){
    
    cout << "printing the array "<< endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "printing done. "<< endl;
}

int main(){
    
    //declare
    int number[15];
    
    //accessing array
    
    cout << "Value at 14 index " << number[14] << endl;
    
    //cout << "Value at 20 index " << number[20] << endl;
    
    //initialise an array
    int second[3] = {5, 7, 11};
    
    //accessing an element
    cout << "Value at 2nd index " << second[2] << endl;
    
    
    int third[15] = {2,7};
    int n=15;
    printArray(third, 15);
    
    //initialise all locations with 0
    int fourth[10] = {0};
    n=10;
    printArray(fourth, 10);
    
    //initialise all locations with 1 like below
    int fifth[10] = {1};
    n=10;
    printArray(fifth,10);
    
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth array " << fifthSize << endl;
    
    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    
    //printArray(ch, 5);
    
    cout << endl << "Everything is fine" << endl << endl;
    
    return 0;
}