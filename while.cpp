// Lecture 3: While Loop
// This code demonstrates the use of a while loop to print numbers from 1 to 10.

#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int count = 1;

    while ( count <= n ) {
        cout << count << " ";
        count++;
    }

    return 0;
}