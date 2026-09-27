#include <iostream>
#include <deque>
using namespace std;

// deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.

// You can access a deque element by referring to the index number inside square brackets [].
// You can also access the first or the last element of a deque with the .front() and .back() functions:
// you can also use the .at()

// Note: The .at() function is often preferred over square brackets [] because it throws an error message if the element is out of range:

int main(){

    deque<int> myDeque;
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    cout << myDeque[0] << endl;
    cout << myDeque[1] << endl;
    cout << myDeque.front() << endl;
    cout << myDeque.back() << endl;
    myDeque.back() = 31;
    cout << myDeque.back() << endl;
    
    myDeque.push_front(11);
    
    cout << myDeque[0] << endl;
    
    myDeque.pop_back();
    cout << myDeque.back() << endl;
    return 0;
}