#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> que; // initially empty
    queue<int> que2; // initially empty
    
    que.push(5);       // que = [5]
    que.push(7);       // que = [5, 3]
    que.push(9);       // que = [5, 3, 9]
    que.pop();         // que = [3, 9]
    que.push(1);       // que = [3, 9, 1]

    que.swap(que2); // que2 = [3, 9, 1], que = []

    cout << "Queue2 Front:" << que2.front() << endl;
    cout << "Queue2 size: " << que2.size() <<endl;


    
    return 0;
}