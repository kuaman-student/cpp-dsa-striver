#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular BiPyramid Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 0; i < sizeOfPattern; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = sizeOfPattern-1; i>0; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}