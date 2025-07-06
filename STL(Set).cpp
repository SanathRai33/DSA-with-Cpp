#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(1);
    s.insert(1); //Only unique value
    s.insert(6);
    s.insert(8);

    s.erase(8);

    cout << s.size() << endl;
    cout << s.count(1) << endl;
    cout << s.empty() << endl;


    return 0;
}