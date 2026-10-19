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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 1){
            count++;
        }
    }
    cout << "count :\t" << count;
    
    return 0;
}