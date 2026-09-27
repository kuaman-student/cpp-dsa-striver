#include <iostream>
#include <queue>
using namespace std;


// FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming.

// Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back.



int main(){

    queue<int> myQue;
    myQue.push(10);
    myQue.push(20);
    myQue.push(30);
    cout << myQue.front() << "\t" << myQue.back() << endl;
    myQue.front() = 11;
    cout << myQue.front() << "\t" << myQue.back() << endl;
    myQue.pop();
    cout << myQue.front() << "\t" << myQue.back() << endl;
    return 0;
}