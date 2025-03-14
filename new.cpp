#include <iostream>

int main() {
    
    int &a = *new int(5);
    int &b = *new int(10);

   
   
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    
    delete &a;
    delete &b;

    return 0;
}