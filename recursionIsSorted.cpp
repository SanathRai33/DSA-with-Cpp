#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> vec, int n){
    if( n==0 || n==1){
        return true;
    }

    return vec[n-1] >= vec[n-2] && isSorted( vec, n-1);

}

int main() {

    vector<int> vec1 = { 1, 2, 3, 6, 4}; // false --> 0
    vector<int> vec2 = { 1, 2, 3, 4, 5}; // true --> 1
    int n = vec2.size();
    

    cout << isSorted(vec2, n) <<endl;
    
    return 0;
}