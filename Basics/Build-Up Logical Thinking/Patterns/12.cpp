#include <iostream>
using namespace std;

int main()
{
    cout << "Special Triangular Pyramid Pattern of numbers\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        // forward number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        //space
        for (int j = 1; j <= 2*(sizeOfPattern-i); j++)
        {
            cout << " ";
        }
        

        // backward number
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }


        cout << "\n";
        
    }
    

    return 0;
}