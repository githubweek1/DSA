// C++ program to compute the power of a to b

#include <iostream>
using namespace std;

// function prototype
int power(int a, int b);

// main function
int main() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "pow(a, b): " << power(a, b) << endl;
}

// function to computer power
int power(int a, int b) {
    int result = 1;

    while (b > 0) {
        if (b % 2 != 0)
            result = result * a;
        
        a = a * a;
        b = b / 2;
    }
    return result;
}