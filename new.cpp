#include <iostream>
using namespace std;

int main() {
    int &a = *new int(5);
    int &b = *new int(10);

    cout << "a: " << a << ", b: " << b << endl;

    
    delete &a;
    delete &b;

    return 0;
}