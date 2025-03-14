#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    
    int* ptr_a = nullptr; 
    int* ptr_b = nullptr;  
 

    if (ptr_a == nullptr) {
        std::cout << "Pointer to a is null." << std::endl;
    } else {
        std::cout << "Value of a: " << *ptr_a << std::endl;
    }

    if (ptr_b == nullptr) {
        std::cout << "Pointer to b is null." << std::endl;
    } else {
        std::cout << "Value of b: " << *ptr_b << std::endl;
    }
    return 0;
}