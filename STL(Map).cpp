#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m; // initially empty

    m["TV"] = 8000; // insert or update key-value pair
    m["Laptop"] = 70000; // insert or update key-value pair
    m["Tablet"] = 15000; // insert or update key-value pair

    m.emplace("Mobile", 10000);

    m.erase("TV");

    if(m.find("TV") != m.end()){
        cout << "\nFound";
    }else{
        cout << "\nNot found";
    }

    cout << endl;

    for(auto p: m){ //lexicographically asc ordr in out
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    cout << "Cout = " << m.count("TV");

    
    return 0;
}