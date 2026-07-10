#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular Pyramid Pattern of numbers\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}