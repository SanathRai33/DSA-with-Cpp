#include <iostream>
using namespace std;

// Time Complexity = O(2^n) (Exponential)
int fibonacci(int n){
    if( n == 0 || n == 1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    
    int n = 10;

    int answer = fibonacci(n);

    cout << "\nFibonacci of " << n << " is: " << answer << endl;
    
    return 0;
}