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
int gcd(int a, int b) {
    int res = min(a, b);

    while (res > 0) {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}