// Lecture 3: If-Else Statements
// This code checks if a person is eligible to vote based on their age.

#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is 18 or older
    if( age >= 18){
        cout << "\nYou are eligible to vote." << endl;
    }else{
        cout << "\nYou are not eligible to vote." << endl;
    }

    return 0;
}