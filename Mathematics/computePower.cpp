// C++ program to compute the power of a to b

#include <iostream>
using namespace std;

// function prototype
long long power(int a, int b);

// main function
int main() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << a << " ^ " << b << ": " << power(a, b) << endl;
}

// function to computer power
long long power(int a, int b) {
    long long result = 1;

    while (b > 0) {
        if (b & 1)
            result = result * a;
        
        a = a * a;
        b = b >> 1;
    }
    return result;
}