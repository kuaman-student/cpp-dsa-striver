#include<bits/stdc++.h>
using namespace std;

int main(){
    // hashing = pre-storing/fetching values in a hash table to avoid recomputation
    int n;
    cout << "Enter n:\t";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout << "Enter element " << i+1 << ":\t";
        cin >> arr[i];
    }

    //inside main, max int arr size - 10^6, for bool array - 10^7
    //outside main, max int arr size - 10^7, for bool arr - 10^8


    //using arrays to hash
    // let elements less than equal to 12

    //precomputing the occurence of each number in the array
    int hash[13] = {0};

    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }
    int num; //number to check occurence
    cout << "Enter number to check:\t";
    cin >> num;

    cout << "\n" << hash[num];

    //number hashin => arrays
    //character hashing => arrays
    //string hashing => arrays

    //umagine array has only chars from lowercase a-z
    //then we can map a as 0, b -> 1,.... z-> 25, we can do this by ascii value of char - ascii value of 'a' => 97 and z => 122, so we can use an array of size 26 to store the occurence of each char in the string
    // so for c => hash no = c - 97
    // c - a = 2

    string str = "abcdabehf";

    hash[26] = {0};
    for(size_t i = 0; i<str.length(); i++){
        hash[str[i]-'a']++;
    }

    char str_to_check;
    cout << "\nEnter a charachter to find occurence:\t";
    cin >> str_to_check;
    cout << hash[str_to_check-'a'];

    //character are at max 256, so we can use an array of size 256 to store the occurence of each char in the string
    return 0;
}