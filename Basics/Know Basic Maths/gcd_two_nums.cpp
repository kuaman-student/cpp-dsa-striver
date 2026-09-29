#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1 = 48;
    int n2 = 36;
    int n3 = 0;
    while(true){
        n3 = n2;
        n2 = n1%n2;
        n1 = n3;
        if(n2 == 0){
            break;
        }
    }
    cout << n1;
}