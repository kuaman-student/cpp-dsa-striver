#include <unordered_set>
#include <iostream>
using namespace std;

int main(){
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(30);
    us.insert(40);
    us.insert(10);

    for(auto elem: us){
        cout << elem << endl;
    }
}