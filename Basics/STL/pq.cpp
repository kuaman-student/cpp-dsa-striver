#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(9);

    cout << pq.top() << endl;
    cout << pq.size();
}