#include <iostream> 
#include "swapp.cpp" 

using namespace std; 

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl; 
    SwapNumber::swap(&a, &b);  

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
