// Checking the number for primality

#include <iostream>
using namespace std;

int main() {
    bool isPrime = true;
    int n = 7;

    for(int i = 2; i*i <= n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;     
    }
    return 0;
}