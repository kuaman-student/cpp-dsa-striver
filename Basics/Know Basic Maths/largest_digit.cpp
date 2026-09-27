#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 31542;
    int largest_num = 0;
    while(n>0){
        if((n%10) > largest_num){
            largest_num = n%10;
        }
        n = n/10;
    }
    cout << largest_num;
    return 1;
}