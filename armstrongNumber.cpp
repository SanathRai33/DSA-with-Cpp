#include <iostream>
using namespace std;

bool isArmstrong( int n){
    int original = n;
    int sum = 0;
    while( n != 0 ){
        int digit = n%10;
        sum += (digit*digit*digit);
        n/=10;
    }

    if(original==sum){
        return true;
    }else{ 
        return false;
    }
}

int main() {
    
    int n = 153;

    cout << endl;

    if(isArmstrong(n)){
        cout << n << " is an armstrong number\n";
    }else{
        cout << n << " is not armstrong number\n";
    }
    
    return 0;
}