#include <iostream>
using namespace std;

void reverseArray( int arr[], int size){
    int start = 0;
    int end = size-1;

    while( start < end ){
        swap( arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[] = {71, 42, 37, 96, 28, 6, 36, 83, 64, 21};
    int size = 10;

    reverseArray( arr, size);

    for( int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}