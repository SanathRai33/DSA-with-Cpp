#include <iostream>
using namespace std;

int linearSearch( int arr[], int target, int size){
    for( int i=0; i<size; i++){
        if( target == arr[i]){
            return arr[i];
        }
    }
    
    return -1;

}

int main() {

    int arr[] = {71, 42, 37, 96, 28, 6, 36, 83, 64, 21};
    int size = 10;
    int target = 36;

    cout << linearSearch( arr, target, size) << endl;

    return 0;

}