#include <iostream>
using namespace std;

int main()
{
    cout << "Reverse Triangular Pyramid Pattern of Alphabets\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = sizeOfPattern; i >0; i--)
    {
        for (char counter = 65; counter < 65+i; counter++)
        {
            cout << counter;
        }
        cout << "\n";
    }

    return 0;
}