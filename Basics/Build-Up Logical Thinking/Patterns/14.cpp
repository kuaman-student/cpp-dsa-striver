#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular Pyramid Pattern of Alphabets\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        for (char counter = 65; counter < 65+i; counter++)
        {
            cout << counter;
        }
        cout << "\n";
    }

    return 0;
}