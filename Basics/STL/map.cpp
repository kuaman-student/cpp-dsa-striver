#include <iostream>
#include <map>
#include <string>

using namespace std;


// A map stores elements in "key/value" pairs.

// Elements in a map are:

// Accessible by keys (not index), and each key is unique.
// Automatically sorted in ascending order by their keys.


// A map cannot have elements with equal keys, it will only keep the first one

int main(){
    // If you want to add elements at the time of declaration, place them in a comma-separated list, inside curly braces {}:

    map<string, int> people = {{"A", 10}, {"B", 20}, {"C", 30}};

    // safer to use .at function
    cout << people["A"] << endl;
    cout << people.at("B") << endl;
    people["B"] = 21;
    cout << people.at("B") << endl;
    
    people["D"] = 40;
    people.insert({"E", 50});
    cout << people.at("D") << endl;
    cout << people.at("E") << endl;


    return 0;
}