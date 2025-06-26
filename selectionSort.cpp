#include <iostream>
#include <vector>
using namespace std;

// Time complexity = O(n^2)
vector<int> selectionSort( vector<int> nums){

    int n = nums.size();

    for( int i=0; i<n-1; i++){
        int minInd = i;
        for( int j=i+1; j<n; j++){
            if( nums[minInd] > nums[j]){
                minInd = j;
            }
        }
        swap( nums[i], nums[minInd]);
    }
    return nums;
}

int main() {
    
    vector<int> nums = { 5, 3, 1, 6, 2, 4};

    vector<int> sortedArry = selectionSort( nums);

    cout << "\nBefore sorting: ";
    for( int val: nums){
        cout << val << " ";
    }

    cout << "\nAfter sorting: ";
    for( int val: sortedArry){
        cout << val << " ";
    }

    cout << endl;
    
    return 0;
}