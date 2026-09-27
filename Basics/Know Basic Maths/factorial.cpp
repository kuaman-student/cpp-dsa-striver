#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num == 1){
        return 1;
    }else{
        return num * fact(num-1);
    }
}

int main(){
    if(n == 0 || n == 1){
            return 1;
    }
    cout << fact(9);
    return 0;
}