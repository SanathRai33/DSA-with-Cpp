#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    priority_queue<int> pq; // initially empty

    // Adding elements to the priority queue
    pq.push(5);       // pq = [5]
    pq.push(3);       // pq = [5, 3]
    pq.push(9);       // pq = [9, 5, 3]
    pq.push(1);       // pq = [9, 5, 3, 1]
    pq.push(8);       // pq = [9, 8, 5, 3, 1]

    // Displaying the top element
    cout << "Top element: " << pq.top() << endl; // Outputs 9

    while (!pq.empty()) {
        cout << pq.top() << " "; // Outputs the top element
        pq.pop();                // Removes the top element
    } 
    
    return 0;
}