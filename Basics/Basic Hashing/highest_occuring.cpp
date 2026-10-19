#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[5] = [1, 2 ,3, 3, 5];
    int counts[100000] = [0];
    for(int num: nums){
        counts[num] ++;
    }

    cout << max(counts);
}