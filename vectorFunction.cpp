#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = { 91, 23, 54, 63, 84, 69, 01, 39};

    vec.pop_back();
    vec.push_back(81);

    cout << "\nFirst value: " << vec.front() << endl;
    cout << "Last value: " << vec.back() << endl;

    cout << endl;
    
    for(int val: vec){
        cout << val << endl;
    }

    cout << "\nSize of vector:" << vec.size() << endl;
    cout << "Capacity of vector:" << vec.capacity() << endl;
    
    return 0;
}

// g++ -std=c++11 vectorFunction.cpp //if got error in compile run like this