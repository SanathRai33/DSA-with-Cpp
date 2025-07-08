#include <iostream>
using namespace std;

int printDigits(int n){
    while(n != 0){
        int digit = n%10;
        cout << digit << endl;
        n/=10;
    }
}

int main() {
    
    int n = 5481;

    printDigits(n);
    
    return 0;
}