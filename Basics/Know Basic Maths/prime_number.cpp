#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int isprime = true;
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }
    cout << isprime;
}