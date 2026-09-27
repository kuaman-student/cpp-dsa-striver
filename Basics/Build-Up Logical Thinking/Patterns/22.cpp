#include <iostream>
using namespace std;
int main(){

    cout << "Special Square Pattern of numbers\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    int num;

    for (int i = 0; i < 2*sizeOfPattern-1; i++)
    {
        for (int j = 0; j < 2*sizeOfPattern-1; j++)
        {
            num = min(min(i,j), min((2*sizeOfPattern)-2 - i,(2*sizeOfPattern)-2 - j));
            cout << sizeOfPattern - num;
            cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}