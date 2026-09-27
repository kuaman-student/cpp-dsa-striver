#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> mySet = {1, 5, 3, 2, 5, 3};
    mySet.insert(4);
    for (int integer : mySet){
        cout << integer << endl;
    }
    set<int, greater<int>> mySet2 = {1, 5, 3, 2, 5, 3};
    for (int integer : mySet2){
        cout << integer << endl;
    }
    
    mySet2.erase(5);
    for (int integer : mySet2){
        cout << integer << endl;
    }
    return 0;
}