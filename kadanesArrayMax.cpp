#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int s = 5;
    int arr[5] = { 1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    int curSum = 0;
    for( int i=0; i<s; i++){
        curSum+=arr[i];
        maxSum = max( curSum, maxSum);
        if( curSum < 0){
            curSum = 0;
        }
    }

    cout << maxSum;
    
    return 0;
}