#include <iostream>
using namespace std;

int main()
{
    cout << "Special Triangular Pyramid Pattern of Alphabets\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    char counter = 64+sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << char(counter-i+j);
        }
        cout << "\n";
    }

    return 0;
}