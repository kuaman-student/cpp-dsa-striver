#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 31542;
    int counter = 0;
    while(n>0){
        if((n%10)%2 == 1){
            counter++;
        }
        n = n/10;
    }
    cout << counter;
    return 1;
}