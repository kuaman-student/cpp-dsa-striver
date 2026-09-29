#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 125;
    int orig = n;
    int sums = 0;
    while(n>0){
        sums += (n%10)*(n%10)*(n%10);
        n = n/10;
    }
    cout << (sums==orig);    
    return 1;
}