#include <iostream>
#include <vector>
using namespace std;

vector<int> arrProduct( vector<int> nums){

    int n = nums.size();
    vector<int> product(n, 1);

    for( int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            if( i!=j){
                product[i]*=nums[j];
            }
        }
    }
    return product;
}

int main() {
    
    vector<int> nums = { 1, 2, 3, 4};

    vector<int> productArr = arrProduct( nums);

    for( int val: productArr){
        cout << val << " ";
    }

    cout << endl;
    
    return 0;
}