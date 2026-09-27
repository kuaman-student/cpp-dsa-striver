#include <set>
#include <iostream>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(10);
    ms.insert(12);
    ms.insert(12);
    ms.insert(40);
    ms.insert(30);
    ms.insert(20);

    for(auto it: ms){
        cout << it << endl;
    }
    // cout << ms.find(40);
    ms.erase(12);
    cout << ms.count(12);
}