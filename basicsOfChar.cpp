#include <iostream>
using namespace std;

int main() {
    char str[] = { 'a', 'b', 'c', '\0'}; // 3 characters in str
    char str2[100];
    char str3[100];

    // cout << "\nEnter char array: ";
    // cin >> str2; // Only store before spaces(" ") value

    cout << "Enter 2nd char array: ";
    cin.getline( str3, 100, '$'); // here $ is delimitor we can use any char

    cout << endl;
    cout << str << endl;
    // cout << str2 << endl;
    cout << str3 << endl;
    
    return 0;
}