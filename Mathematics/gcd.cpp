// C++ program to calculate gcd of two numbers

#include <iostream>
using namespace std;

// function prototype
int gcd(int a, int b);

int main() {
    int a, b;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "GCD: " << gcd(a, b) << endl;
}

// function to calculate gcd of a and b
// using euclidian algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}