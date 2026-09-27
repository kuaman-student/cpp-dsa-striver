#include <iostream>
using namespace std;

int main()
{
    cout << "Reverse Pyramid Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = sizeOfPattern; i > 0; i--)
    {
        // for space
        for (int j = 1; j <= sizeOfPattern-i; j++)
        {
            cout << " ";
        }

        // for *
        for (int j = 1; j <= (2*i)-1; j++)
        {
            cout << "*";
        }

        // for space
        for (int j = 1; j <= sizeOfPattern-i; j++)
        {
            cout << " ";
        }

        cout << "\n";
        
    }

    return 0;
}