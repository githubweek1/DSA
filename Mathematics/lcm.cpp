// C++ program to find the LCM of two numbers

#include <iostream>
using namespace std;

// function prototype
int lcm(int a, int b);
int gcd(int a, int b);

// main function 
int main() {
    int a, b;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "LCM: " << lcm(a, b) << endl;
}

// function to get LCM of a and b
int lcm(int a, int b) {
    // lcm(a, b) * gcd(a, b) = a * b 
    // => lcm(a, b) = (a * b) / gcd(a, b);
    return ((a * b) / gcd(a, b));

}

// function to get GCD of a and b
int gcd(int a, int b) {
    if(b == 0)
        return a;
    else 
        return gcd(b, a % b);
}