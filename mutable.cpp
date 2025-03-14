#include <iostream>
using namespace std;

class MyClass {
private:
    int a;
    mutable int b;

public:
    MyClass(int x, int y) : a(x), b(y) {}

    void printValues() const {
        cout << "a: " << a << ", b: " << b << endl;
    }

    void modifyB(int newValue) const {
        b = newValue;
    }
};

int main() {
    const MyClass obj(5, 10);  

    obj.printValues();  
    obj.modifyB(20);    
    obj.printValues(); 

    return 0;
}
    