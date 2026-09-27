#include <iostream>
using namespace std;

int main()
{
    cout << "Pyramid Pattern of Alphabets\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    char counter = 64;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        // for space
        for (int j = 1; j <= sizeOfPattern-i; j++)
        {
            cout << " ";
        }

        // for alphabets
        for (int j = 1; j <= i; j++)
        {
            cout << char(counter+j);
        }

        for (int j = i-1; j >0; j--)
        {
            cout << char(counter+j);
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