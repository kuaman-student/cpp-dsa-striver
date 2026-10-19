#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    int arr[n];
    cout << "Enter n:\t";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element" << i+1 << ":\t";
        cin >> arr[i];
    }
    int rev[n];
    for(int i = n-1; i>=0; i--){
        rev[i] = arr[n-1-i];
    }
    for(int re: rev){
        cout << re << endl;
    }
    
    return 0;
}