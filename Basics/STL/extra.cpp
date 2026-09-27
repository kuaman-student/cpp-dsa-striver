#include <bits/stdc++.h>

using namespace std;


bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if (p1.first > p2.first) return true;
    return false;
}



int main(){
    vector<int> v = {1, 2, 3, 10, 9, 7};
    for (auto val : v){
        cout << val << endl;
    }
    sort(v.begin(), v.end());
    for (auto val : v){
        cout << val << endl;
    }
    sort(v.begin(), v.end(), greater<int>());
    for (auto val : v){
        cout << val << endl;
    }



    //custom sorting
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    //sort wrt second element in ascending
    // if its same, sort according to second element in descending order

    
    sort(a, a+2, comp);

    for(auto val : a){
        cout << val.first << " : " << val.second << endl;
    }

    int num =7;
    //return number of 1 in binary
    //111
    cout << __builtin_popcount(num)<< endl;
    num = 100;
    cout << __builtin_popcount(num)<<endl;

    string s = "1232";
    sort(s.begin(), s.end());

    do{
        cout << s<< endl;
    }while(next_permutation(s.begin(), s.end()));

    v = {1, 4, 32,31};

    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;


    return 0;
}