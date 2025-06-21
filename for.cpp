// Lecture 3: For Loop
// This code demonstrates the use of a for loop to print sum of 10.

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for( int i= 1; i <= 10; i++){
        sum+=i;
    }
    cout << "\nSum of first 10 numbers is: " << sum << endl;
    
    return 0;
}