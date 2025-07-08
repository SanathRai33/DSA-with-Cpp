#include <iostream>
using namespace std;

int gcd( int a, int b){

    while(a > 0 && b > 0){
        if(a>b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    if(a==0){
        return b;
    }else{
        return a;
    }
}

int lcm( int a, int b){
    int gcdVal = gcd( 20, 24);
    return (a*b)/gcdVal;
}

int main() {
    
    cout << lcm( 20, 28) << endl;

    return 0;
}