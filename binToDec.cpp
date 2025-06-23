#include <iostream>
using namespace std;

int binaryTODec(int b){
    int ans = 0;
    int rem;
    int pow = 1;

    while(b>0){
        rem = b %10;
        ans += (rem * pow);
        pow *= 2;
        b/=10;
    }
    return ans;
}

int main() {
    cout << binaryTODec(11111) << endl;
    
    return 0;
}