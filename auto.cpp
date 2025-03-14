#include <iostream>

int main() {
    auto x = 10;  // 'auto' deduces 'x' as an integer
    auto y = 5.5; // 'auto' deduces 'y' as a double

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}