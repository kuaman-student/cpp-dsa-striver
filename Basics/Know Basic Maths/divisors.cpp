#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 48;
    vector<int> divisors;
    for(int i = 1; i<n+1; i++){
        if(n%i == 0){
            divisors.push_back(i);
        }
    }
    for(int divisor: divisors){
        cout << divisor << endl;
    }
    // cout << divisors;
}