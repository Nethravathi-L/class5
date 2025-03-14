#include <iostream>

class Example {
public:
    static int count;  // Declaration of static variable
    Example() { count++; }
};

// Definition of static variable outside the class
int Example::count = 0;

int main() {
    Example obj1, obj2, obj3;
    std::cout << "Number of objects created: " << Example::count << std::endl;
    return 0;
}