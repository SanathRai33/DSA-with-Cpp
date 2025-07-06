#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec; // initially empty

    vector<int> vec2 = {3, 5, 9, 2, 9, 1};
    // vec2 = [3, 5, 9, 2, 9, 1]

    vector<int> vec3(3, 8);
    // vec3 = [8, 8, 8]

    vector<int> vec4(vec3);
    // vec4 = [8, 8, 8]

    // ---------- Working with vec ----------
    vec.push_back(5);       // vec = [5]
    vec.push_back(3);       // vec = [5, 3]
    vec.push_back(9);       // vec = [5, 3, 9]
    vec.pop_back();         // vec = [5, 3]
    vec.erase(vec.begin()); // removes first element → vec = [3]

    // ---------- Working with vec2 ----------
    vec2.erase(vec2.begin() + 2, vec2.end() - 1);
    // removes index 2 to 4 → [9, 2, 9]
    // vec2 = [3, 5, 1]

    vec2.insert(vec2.begin() + 2, 100);
    // insert 100 at index 2 → vec2 = [3, 5, 100, 1]

    // ---------- Clear vec3 ----------
    vec3.clear(); // vec3 becomes empty, but capacity is retained

    // ---------- Loop output ----------
    cout << "Vector1: ";
    for (int val : vec)
        cout << val << " ";
        cout << endl;

    cout << "Vector2: ";
    for (int val : vec2)
        cout << val << " ";
        cout << endl;

    cout << "Vector3: ";
    for (int val : vec3)
        cout << val << " ";
        cout << endl;

    cout << "First item: " << vec.front() << " Last item: " << vec.back() << endl;

    cout << "Capacity: " << vec.capacity() << endl;

    cout << "Vector2 isEmpty: " << vec2.empty() << endl;

    return 0;
}