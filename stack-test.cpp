#include <iostream>
#include "stack.h"
#include <stdexcept>

int main() {
    Stack<int> s;
    
    try {
        s.top();  // Should throw an error
    } catch (const std::underflow_error& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    s.push(42);
    std::cout << "Top: " << s.top() << "\n"; // Should print 42

    s.pop();
    
    try {
        s.pop();  // Should throw an error
    } catch (const std::underflow_error& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}