#include <iostream>
using namespace std;

// Time complexity = O(n^2)
void insertionSort( int arr[], int n){
    for( int i=0; i<n; i++){
        int cur = arr[i];
        int prev = i-1;

        while( prev>=0 && arr[prev]>cur){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;
    }
}

void printArray( int arr[], int n){
    for( int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int n = 5;
    int arr[] = { 4, 1, 5, 3, 2};

    insertionSort( arr, n);
    printArray( arr, n);

    return 0;
}