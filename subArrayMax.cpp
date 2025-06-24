#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int s = 5;
    int arr[5] = { 1, 2, 3, 4, 5};

    int maxSum = INT_MIN;
    for( int st=0; st<s; st++){
        int curSum = 0;
        for( int end=st; end<s; end++){
            curSum += arr[end];
            maxSum = max( curSum, maxSum);
        }
    }

    cout << maxSum;
    
    return 0;
}