#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int sum = 0;
    for(int i = 1; i<n+1; i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    cout << (n == sum);
}