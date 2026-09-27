#include <iostream>
#include <stack>
using namespace std;

// To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

// Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.


int main(){
    stack <int> mystack;

    mystack.push(10);
    cout << mystack.top() << endl;
    mystack.push(20);
    cout << mystack.top() << endl;
    mystack.push(30);
    cout << mystack.top() << endl;
    mystack.pop();
    cout << mystack.top() << endl;
    cout << mystack.size() << endl;
    cout << mystack.empty() << endl;
    return 0;
}