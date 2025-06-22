#include <iostream>
using namespace std;

int main() {
    int n=4; // Size of the square pattern
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    for(int i=0; i <n; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            cout << "* ";
            // cout << j;  // Uncomment this line to print column numbers instead of stars
            // cout << ch;
            // ch = ch + 1;
        }
        cout << endl; 
    }
    
    return 0;
}