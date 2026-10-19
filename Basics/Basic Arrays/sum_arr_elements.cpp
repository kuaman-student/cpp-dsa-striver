#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    int arr[n];
    cout << "Enter n:\t";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element:\t" << i+1;
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    cout << "Sum :\t" << sum;
    
    return 0;
}