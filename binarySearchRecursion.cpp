#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(vector<int> arr, int target, int st, int end){

    if(st <= end){
        int mid = st + (end-st)/2;
        if(target > arr[mid]){
            return recursiveBinarySearch( arr, target, mid+1, end);
        }else if(target < arr[mid]){
            return recursiveBinarySearch( arr, target, st, mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}

int main() {
    
    vector<int> arr = { -1, 0, 2, 5, 6, 9, 11, 14};

    int target = 11;
    int st = 0;
    int end = arr.size()-1;

    int ans = recursiveBinarySearch(arr, target, st, end);

    cout << "Index of target is " << ans << endl;
    
    return 0;
}