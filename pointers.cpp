#include <iostream>
using namespace std;

int main() {
    int a = 12;

    // Address of a in memory
    int* ptr = &a;

    // Address of pointer 2 ** for storing pointers address
    int** ptr2 = &ptr;

    cout << ptr << endl;
    cout << ptr2 << endl;

    // The value which stored in that address
    cout << *(&a) << endl; // **(ptr2), *(ptr) and *(&a) all are same 
    
    return 0;
}