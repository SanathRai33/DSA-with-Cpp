#include <iostream>
using namespace std;

int digitSum(int n) {
    int sum=0;
    while(n>0){
        int rem=n%10;
        n/=10;
        sum+=rem;
    }
    cout << sum << endl;
}

int main() {

    digitSum(1234567);
    
    
    return 0;
}