#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int, int> mm1;
    mm1.insert({10, 20});
    mm1.insert({20, 60});
    mm1.insert({10, 30});
    mm1.insert({40, 50});

    for(auto data : mm1){
        cout << data.first << " : " << data.second <<endl;
    }

    auto initial = mm1.begin();
    cout << initial->first << " : " << initial->second << endl;
    initial = next(initial, 1);
    cout << initial->first << " : " << initial->second << endl;
    return 0;
}