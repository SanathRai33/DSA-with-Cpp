#include <iostream>
using namespace std;

int decToDec(int d){

    int ans= 0;
    int pow= 1;

    while(d>0){
        int rem=d%2;
        ans+= (rem*pow);
        pow*=10;
        d/= 2;
    }
    return ans;
}

int main() {
    
    cout << decToDec(32) << endl;

    return 0;
}