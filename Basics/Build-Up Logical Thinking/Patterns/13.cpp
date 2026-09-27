#include <iostream>
using namespace std;

int main()
{
    cout << "Special Triangular Pyramid Pattern of numbers\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    int counter = 1;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << counter << " ";
            counter++;
        }
        

        cout << "\n";
        
    }
    

    return 0;
}