#include <iostream>
using namespace std;

void completeLine(int length){
    for (int i = 0; i < length; i++)
    {
        cout << "*";
    }
    
}
void borderLine(int length){
    cout << "*";
    for (int i = 0; i < length-2; i++)
    {
        cout << " ";
    }
    cout << "*";
    
}
int main()
{
    cout << "Hollow Square Pattern of *\n\nEnter Size:\t";
    int sizeOfPattern;
    cin >> sizeOfPattern;
    for (int i = 1; i <= sizeOfPattern; i++)
    {
        if(i==1 || i == sizeOfPattern){
            completeLine(sizeOfPattern);
        }else{
            borderLine(sizeOfPattern);
        }
        cout << "\n";
    }

    return 0;
}