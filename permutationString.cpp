#include <iostream>
#include <vector>
using namespace std;

void getPermute(string str, int idx, vector<string>& ans){

    int n = str.length();

    if(idx==n){
        ans.push_back(str);
    }

    for(int i = idx; i < n; i++){
        swap(str[idx], str[i]);
        getPermute(str, idx + 1, ans);
        swap(str[idx], str[i]); // backtrack
    }
}

int main() {
    
    string str = "abc";
    vector<string> ans;

    getPermute(str, 0, ans);
    
    cout << "\nPermutaions:";
    for(auto s : ans){
        cout << " " << s;
    }
    cout << endl;

    return 0;
}