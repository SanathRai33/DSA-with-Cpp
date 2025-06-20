// Lecture 1: Install VS code and Setup C++ Compiler
// Lecture 2: Basic Input, Output, Variables and Data Types

#include <iostream>
using namespace std;

// This program demonstrates basic input, output, and variable declaration in C++
int main(){

    // Declare variables of different data types
    int age;
    string name = "Sanath Rai";
    char initial = 'S';
    float height = 5.5;
    double weight = 70.5;
    bool isStudent = true;

    // Input the age from the user
    cout << "Enter your age: ";
    cin >> age;

    // Output the collected information
    cout << "\nName: " << name << endl;
    cout << "Initial: " << initial << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Is student: " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}