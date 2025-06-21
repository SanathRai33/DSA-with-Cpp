// Lecture 3: If-Else-Else If Statements
// This code find the grade of the student.

#include <iostream>
using namespace std;

int main(){
    int mark;

    cout << "Enter your mark in 100: ";
    cin >> mark;

    // Check the mark and determine the grade
    if( mark >= 85){
        cout << "\nYou are passed with Distinction" << endl;
    }else if( mark >= 75 && mark < 85){
        cout << "\nYou are passed with first class" << endl;
    }else if( mark >= 60 && mark < 75){
        cout << "\nYou are passed with second class" << endl;
    }else if( mark >= 35 && mark < 60){
        cout << "\nYou are passed with third class" << endl;
    }else{
        cout << "\nYou are failed. Try better..." << endl;
    }

    return 0;
}