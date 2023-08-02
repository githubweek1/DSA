// C++ program to compute the power of a to b

#include <iostream>
using namespace std;

// function prototype
int computerPower(int a, int b);

// main function
int main() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "pow(a, b): " << computerPower(a, b) << endl;
}

// function to computer power
int computerPower(int a, int b) {
    if (b == 0)
        return 1;
    
    int result = 1;
    
    for (int i = 0; i < b; i++) 
        result = result * a;
    
    return result;
}