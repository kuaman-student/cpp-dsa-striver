#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular Reverse Pyramid Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = sizeOfPattern; i>0; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}