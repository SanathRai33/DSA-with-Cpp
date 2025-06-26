#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum( vector<int> vec, int target){

    vector<int> ans;
    int n = vec.size();

    int i = 0;
    int j = n-1;

    while(i<j){
        int pairSum = vec[i] + vec[j];
        if(pairSum>target){
            j--;
        }else if (pairSum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;

}

int main() {
    
    vector<int> vec = { 2, 5, 7, 13, 26};
    int target = 18;

    vector<int> ans = pairSum( vec, target);

    cout << ans[0] << ", " << ans[1] << endl;
    
    return 0;
}

// g++ -std=c++11 vectorFunction.cpp //if got error in compile run like this