#include <iostream>
using namespace std;

int factorial(int a){
    int fact=1;
    for(int i=1; i<=a; i++){
        fact*=i;
    }
    cout << "Factorial of " << a << " is: " << fact << endl;
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    int nCr_val = fact_n / (fact_r * fact_nmr);
    return nCr_val;
}

int main() {
    int n = 6, r = 3;

    cout << nCr(n, r) << endl;

    return 0;
}