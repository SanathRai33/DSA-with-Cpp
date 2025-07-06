#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    deque<int> deq; // initially empty
    deque<int> deq2 = {3, 5, 9, 2, 9, 1}; // deq2 = [3, 5, 9, 2, 9, 1]
    deque<int> deq3(3, 8); // deq3 = [8, 8, 8]
    deque<int> deq4(deq3); // deq4 = [8, 8, 8]

    // ---------- Working with deq ----------
    deq.push_back(5);       // deq = [5]    
    deq.push_back(3);       // deq = [5, 3]
    deq.push_back(9);       // deq = [5, 3, 9]
    deq.pop_back();         // deq = [5, 3]
    deq.erase(deq.begin()); // removes first element → deq = [3]
    deq.push_front(10);     // deq = [10, 3]
    deq.pop_front();        // deq = [3]
    deq.insert(deq.begin() + 1, 100); // insert 100 at index 1 → deq = [3, 100]
    deq.erase(deq.begin() + 1, deq.end() - 1); // removes index 1 to 2 → deq = [3]
    deq.clear(); // deq becomes empty, but capacity is retained
    deq.push_back(1); // deq = [1]
    deq.push_back(2); // deq = [1, 2]
    deq.push_back(3); // deq = [1, 2, 3]
    deq.push_front(0); // deq = [0, 1, 2, 3]
    deq.pop_front(); // deq = [1, 2, 3]

    // ---------- Loop output ----------
    cout << "Deque1: ";
    for (int val : deq)
        cout << val << " ";
    cout << endl;

    cout << "Deque2: ";
    for (int val : deq2)
        cout << val << " ";     
    cout << endl;

    cout << "Deque3: ";
    for (int val : deq3)
        cout << val << " ";
    cout << endl;

    
    return 0;
}