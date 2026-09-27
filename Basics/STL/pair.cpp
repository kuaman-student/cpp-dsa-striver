#include <iostream>
using namespace std;
// In C++, std::pair is a structural container defined in the <utility> header that binds two heterogeneous (different) or homogeneous (same) values together into a single unit. It is widely used to return two values from a function or to store key-value pairs in containers like std::map


int main(){
    pair<int, int> mypair = {10, 20};
    cout << mypair.first << "\n" << mypair.second << endl;


    pair<int, pair<int, int>> nestedPair = {10, {20, 30}};
    cout << nestedPair.first << endl;
    cout << nestedPair.second.first << endl;
    cout << nestedPair.second.second << endl;

    pair <int, int> pairedArray[] = {{10, 20}, {30, 40}, {50, 60}};
    for(int i = 0; i<=2; i++){
        cout << pairedArray[i].first << " " << pairedArray[i].second << endl;
    }

}