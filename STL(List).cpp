#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst; // initially empty
    list<int> lst2 = {3, 5, 9, 2, 9, 1};    // lst2 = [3, 5, 9, 2, 9

    lst.push_back(5);       // lst = [5]
    lst.push_back(3);       // lst = [5, 3] 
    lst.push_front(9);       // lst = [9, 5, 3]
    lst.push_front(1);       // lst = [1, 9, 5, 3]
    lst.pop_back();         // lst = [9, 5]
    lst.pop_front();         // lst = [9, 5]

    for( int val : lst){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}