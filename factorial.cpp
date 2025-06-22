#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return n;
    }else{
        int fact=1;
        for(int i=1; i<=n; i++){
            fact*=i;
        }
        return fact;
    }
}

int main() {
    cout << factorial(5) << endl;
    
    return 0;
}