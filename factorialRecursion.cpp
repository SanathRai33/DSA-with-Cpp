#include <iostream>
using namespace std;

// Time Complexity = O(n)
int factorial(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    
    int n = 5;

    int answer = factorial(n);

    cout << "\nFactorial of " << n << " is: " << answer << endl;
    
    return 0;
}