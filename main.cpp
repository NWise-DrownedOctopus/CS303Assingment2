#include <iostream>
#include "Single_Linked_List.h"

int main() {
    std::cout << "Testing Single_Linked_List...\n";

    Single_Linked_List<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    std::cout << "Front: " << list.front() << "\n";  // Should print 10
    std::cout << "Back: " << list.back() << "\n";    // Should print 30

    list.insert(1, 15);
    std::cout << "Inserted 15 at index 1. Found at: " << list.find(15) << "\n";  // Should print 1

    list.remove(2);
    std::cout << "Removed element at index 2.\n";

    list.pop_front();
    std::cout << "After pop_front, new front: " << list.front() << "\n";  // Should print 15


    list.pop_back();
    std::cout << "After pop_back, new back: " << list.back() << "\n";  // Should print 30

    std::cout << "\nTesting Stack...\n";

    Stack stack;
    std::cout << "Is stack empty? " << stack.empty() << "\n";  // Should print 1 (true)

    std::cout << "Adding three values.\n";

    stack.insert(5);
    stack.insert(10);
    stack.insert(15);

    std::cout << "Is stack empty? " << stack.empty() << "\n";  // Should print 2 (false)

    std::cout << "Top of stack: " << stack.top() << "\n";  // Should print 15

    stack.remove();
    std::cout << "After pop, new top: " << stack.top() << "\n";  // Should print 10

    std::cout << "Stack average: " << stack.average() << "\n";  // Should print (5+10)/2 = 7.5

    return 0;
}
