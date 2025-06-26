#include <iostream>
#include <vector>
using namespace std;

int mooresVoting( vector<int> nums){
    int ans = 0, freq = 0;

    for(int i = 0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
        return ans;
    }

    int count = 0;
    for( int val: nums){
        if( val == ans){
            count++;
        }
    }

    if(count > nums.size()/2){
        return ans;
    }else{
        return -1;
    }
    return ans;
}

int main() {
    
    vector<int> nums = { 1, 2, 1, 3, 2, 1, 2, 3, 1, 1, 2};

    int ans = mooresVoting(nums);

    cout << "\nHigh frequent num: " << ans << endl;
    
    return 0;
}