#include <iostream>
#include <climits> 
using namespace std;

int main() {
    
    int nums[] = {29, 71, -39, 51, 82, 11};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
            // smallest = min( nums[i], smallest); 
        }
        if(nums[i]>largest){
            largest = nums[i];
            // largest = max( nums[i], largest); 
        }
    }

    cout << "\nSmallest num of array is: " << smallest << endl;
    cout << "Largest num of array is: " << largest << endl;
    
    return 0;
}