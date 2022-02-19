#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    for(int i=0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {2,3,5,9,1,4,6,8,7,11};
    int key;

    cout << "Enter the element to search in the array: "<<endl;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if(found){
        cout << "The key " << key << " is present in the array" <<endl;
    }
    else{
        cout << "The key" << key << "is not present in the array" <<endl;
    }

    return 0;
    
}