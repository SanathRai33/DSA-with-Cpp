#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> stk; // initially empty
    stack<int> stk2(stk); // stk in stk2

    // ---------- Working with stk ----------
    stk.push(5);       // stk = [5] 
    stk.push(3);       // stk = [5, 3]
    stk.push(9);       // stk = [5, 3, 9]
    stk.pop();         // stk = [5, 3]
    stk.push(1);       // stk = [5, 3, 1]

    // ---------- Loop output ----------
    cout << "Stack1: ";
    while (!stk.empty()) {
        cout << stk.top() << " "; // Output the top element
        stk.pop();                // Remove the top element
    }
    cout << endl;
    
    return 0;
}