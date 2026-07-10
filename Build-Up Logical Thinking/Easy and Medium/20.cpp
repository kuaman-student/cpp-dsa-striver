#include <iostream>
using namespace std;

int main()
{
    cout << "Special Butterfly Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        for (int j = 1; j <= 2*(sizeOfPattern-i); j++)
        {
            cout << " ";
        }
        
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
           
        cout << "\n";
    }
    for (int i = sizeOfPattern-1; i >0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        for (int j = 1; j <= 2*(sizeOfPattern-i); j++)
        {
            cout << " ";
        }
        
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}