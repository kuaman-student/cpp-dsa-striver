#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myVector;
    myVector.push_back(10);
    cout << myVector[0] << endl;
    
    myVector.emplace_back(20);
    cout << myVector[1] << endl;
    
    
    vector <pair<int, int>> pairedVector;
    pairedVector.emplace_back(10, 20);
    pairedVector.push_back({30, 40});
    cout << pairedVector[0].first << endl;


    vector <int> predefinedSizeVector(5, 10); // we can increase the size even after this
    cout << predefinedSizeVector[0] << endl;
    cout << predefinedSizeVector[3] << endl;
    
    
    vector <int> vec(3); // we can increase the size even after this
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    
    // copying a vector 
    vector <int> v2(predefinedSizeVector);
    cout << v2.at(0) << endl;
    cout << v2.at(1) << endl;
    cout << v2.at(2) << endl;


    vector <int>::iterator it = predefinedSizeVector.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;

    // The auto keyword allows the compiler to automatically determine the correct data type, which simplifies the code and makes it more readable:
    auto itr = pairedVector.begin(); // points the address of 0th index
    cout << itr[0].second << endl;

    auto itr2 = pairedVector.begin(); // points the address of 0th index
    cout << itr2[0].second << endl;
    
    auto itr3 = pairedVector.end() -1; // points the address of last index + 1
    cout << itr3[0].second << endl;

    auto itr4 = pairedVector.end()-2;
    cout << itr4[0].second << endl;



    // for-each loop is much simpler and cleaner than iterators.

    // However, when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements, you should use iterators:

    vector <int> integers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int integer : integers){
        cout << integer << endl;
    }

    for (auto iter = integers.begin(); iter != integers.end();){
        cout << *iter << endl;
        if (*iter == 3){
            iter = integers.erase(iter);
        }else{
            ++iter;
        }
    }

    for(int integer : integers){
        cout << integer;
    }

    cout << endl;
    for(auto it = integers.rbegin(); it != integers.rend(); ++it){
        cout <<*it;
    }
    
    cout << endl;
    
    integers.erase(integers.end()-3, integers.end()-1);
    cout << *integers.end();
    cout << endl;


    // insert function
    vector <int> testVec = {1, 2, 3};
    cout << testVec[1] << endl;
    testVec.insert(testVec.begin()+1, 3, 10);
    cout << testVec[1] << endl;
    cout << testVec[2] << endl;
    cout << testVec[3] << endl;

    vector <int> copy(2, 50);
    testVec.insert(testVec.begin()+2, copy.begin(), copy.end());

    cout << endl ;
    cout << testVec.size() ;
    cout << endl ;
    for (int atestVec : testVec){
        cout << atestVec << endl;
    }
    
    copy.swap(testVec);
    for (int acopy : copy){
        cout << acopy << endl;
    }

    return 0;
}