#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half of the butterfly pattern
    for(int i=0; i<n; i++){

        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        for(int j=1; j<2*n-2*i-1; j++){
            cout << " ";
        }
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the butterfly pattern
    for(int i=0; i<n; i++){

        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        for(int j=0; j<i+i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}