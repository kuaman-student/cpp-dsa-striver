#include <iostream>
#include <list>

using namespace std;
// Array (type arr[N] or std::array) vs List (std::list)

// 1. Memory Allocation
//    • Array: Contiguous memory allocation (all elements are stored next to each other).
//    • List : Non-contiguous memory allocation (nodes are scattered throughout memory).

// 2. Size
//    • Array: Fixed at compile time.
//    • List : Dynamic; can grow or shrink at runtime.

// 3. Element Access
//    • Array: Fast random access using an index — O(1).
//    • List : Slow sequential access by traversal — O(N).

// 4. Insertion / Deletion
//    • Array: Slow — O(N), because elements may need to be shifted.
//    • List : Fast — O(1), if the iterator to the position is already available.

// 5. Memory Overhead
//    • Array: Low, as it stores only the elements.
//    • List : High, as each node stores the element along with pointers to the previous and next nodes.


int main(){
    list<int> numbers = {1, 2,3, 4};

    for(int number : numbers){
        cout << number << endl;
    }

    numbers.back() = 40;
    cout << numbers.back() << endl;
    numbers.push_front(10);
    numbers.front() = 40;
    numbers.push_back(50);
    numbers.back() = 40;
    
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;
    


    numbers.push_back(50);
    numbers.back() = 40;
    
    cout << numbers.front() << endl <<endl;
    cout << numbers.size() << endl;
    
    cout << endl <<endl;
    cout << numbers.empty() << endl;

    
    

    return 0;
}