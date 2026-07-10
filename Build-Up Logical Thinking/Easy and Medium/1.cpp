#include <iostream>
using namespace std;

int main()
{
    cout << "Square Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 0; i < sizeOfPattern; i++)
    {
        for (int j = 0; j <= sizeOfPattern; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}