// Lecture 3: Ternary Statements
// This code checks if a number is even or odd using a ternary operator.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the num: ";
    cin >> num;

    // Check if the number is even or odd using a ternary operator
    cout << (num%2 == 0?  "\nNumber is a even" : "\nNumber is a odd") << endl;

    return 0;
}