#include <iostream>
#include <vector>
using namespace std;

int maxArea( vector<int> waterHeight){
    int maxWater = 0;
    int n = waterHeight.size();
    for( int i = 0; i<n-1; i++){
        for( int j=i+1; j<n; j++){
            int width = j - i;
            int height = min( waterHeight[i], waterHeight[j]);
            maxWater = max( maxWater, width * height);
        }
    }
    return maxWater;
}

int main() {
    
    vector<int> waterHeight = { 1, 8, 6, 2, 5, 4, 8, 3, 7};

    int ans = maxArea( waterHeight);

    cout << "\nMax water area is: " << ans << endl;
    
    return 0;
}