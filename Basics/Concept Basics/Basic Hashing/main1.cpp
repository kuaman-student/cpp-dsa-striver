#include <bits/stdc++.h>
using namespace std;

int main(){
    //number hashing using map and unordered_map

    //map is implemented using self balancing binary search tree, so it takes O(logn) time to insert and fetch values from map
    //unordered_map is implemented using hash table, so it takes O(1) time to insert and fetch values from unordered_map

    //format of map and unordered_map
    //map<key_type, value_type> map_name;
    //unordered_map<key_type, value_type> unordered_map_name;



    //in map, storing and fetching, both takes log n time complexity in all best, avg, worst case

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n] ;
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    int num_to_find;
    cout << "Enter the number to find: ";
    cin >> num_to_find;
    cout << "The number " << num_to_find << " occurs " << mp[num_to_find] << " times in the array." << endl;

    cout << "\n\n\n\n" <<mp.begin()->first << " is the first number in the map" << endl;


    //map stores all the keys in sorted order, so if we want to find the number of elements less than a given number, we can use lower_bound function of map
    int num_to_find_less_than;
    cout << "Enter the number to find the number of elements less than it: ";
    cin >> num_to_find_less_than;
    auto it = mp.lower_bound(num_to_find_less_than);
    cout << it->first << " is the first number greater than or equal to " << num_to_find_less_than << endl;



    //for string hashing by map, we can use map <char, int> mp_string;
    return 0;
}