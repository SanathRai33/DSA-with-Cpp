#include <iostream>
using namespace std;

int main() {
    int s = 5;
    int arr[5] = { 1, 2, 3, 4, 5};

    for( int st=0; st<s; st++){
        for( int end=st; end<s; end++){
            for( int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}