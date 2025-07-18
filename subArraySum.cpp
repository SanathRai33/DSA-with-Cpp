#include <iostream>
#include <climits> 
#include <vector>
using namespace std;

// O(n^2)
int main() {
    int tar = 33;
    vector<int> vec = { 4, 9, 20, 10, 3, 5, 8, 7};
    int n = vec.size();
    int count = 0;

    
    for( int st=0; st<n; st++){
        int sum = 0;
        for( int end=st; end<n; end++){
            sum += vec[end];
            if(sum == tar) count++;
        }
    }

    cout << count;
    
    return 0;
}