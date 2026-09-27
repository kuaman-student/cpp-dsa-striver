#include <iostream>
using namespace std;

int main()
{
    cout << "Triangular Pyramid Pattern of 1&0\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    bool counter;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        i%2 == 0 ? counter = 1 : counter = 0;
        for (int j = 1; j <= i ; j++)
        {
            counter = !counter;
            cout << counter;
        }
        cout << "\n";
    }

    return 0;
}