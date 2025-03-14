#include <iostream>
using namespace std;

class MyClass {
public:
    int a;
    int b;

    
    MyClass(int a, int b) {
        
        this->a = a;
        this->b = b;
    }

    void display() {
        cout << "Value of a: " << this->a << endl;
        cout << "Value of b: " << this->b << endl;
    }
};

int main() {
    MyClass obj(5, 10);  
    obj.display();        

    return 0;
}