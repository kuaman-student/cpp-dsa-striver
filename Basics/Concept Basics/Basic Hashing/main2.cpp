#include <bits/stdc++.h>
using namespace std;
int main(){

    //hashing using unordered map

    //as the name suggests, unordered_map is implemented using hash table, so it takes O(1) time to insert and fetch values from unordered_map
    // in worst case, it can take O(n) time to insert and fetch values from unordered_map, but it is very rare to happen

    //why the worst case can happen in unordered_map?
    //because of internal collisions    

    //hashing -> division method, folding method ,mid square method, 
    //division method -> h(k) = k mod m, where k is the key and m is the size of the hash table
    // collisions can happen in division method, so we need to handle collisions using chaining or open addressing
    // like we want to store occurence of 28, 18, and we did mod 10, then 28 mod 10 = 8 and 18 mod 10 = 8, so both will be stored at index 8, so we need to handle collisions using chaining or open addressing

    //in ordered map, key can be of any data type, but in unordered_map, key can be of only integral data type, so we can use unordered_map<int, int> mp; or unordered_map<string, int> mp; but we cannot use unordered_map<float, int> mp; or unordered_map<double, int> mp;
    return 0;
}