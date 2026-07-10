#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular Pyramid Pattern of *\n\nEnter Size:\t";
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

    return 0;
}