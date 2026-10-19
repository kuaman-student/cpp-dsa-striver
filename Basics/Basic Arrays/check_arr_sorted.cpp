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
    bool sorted = true;
    for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }
    
    cout << "Sorted :\t" << sorted;
    
    return 0;
}