// Lecture 2: Created simple calculator program using basic arithmetic operations

#include <iostream>
using namespace std;

int main(){

    int num1;
    cout << "Enter first number: ";
    cin >> num1;

    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nSum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    cout << "Difference of " << num1 << " and " << num2 << " is: " << (num1 - num2) << endl;
    cout << "Product of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    cout << "Quotient of " << num1 << " and " << num2 << " is: " << (num1 / num2) << endl;
    cout << "Remainder of " << num1 << " and " << num2 << " is: " << (num1 % num2) << endl;

}