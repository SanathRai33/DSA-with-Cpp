// Lecture 3: do-while Loop
// This code demonstrates the use of a do-while loop to print numbers from 1 to 10.

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int count = 1;  
    do {
        cout << count << " ";
        count++;
    } while (count <= n);  
    
    return 0;
}