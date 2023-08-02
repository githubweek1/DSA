// C++ program to count number of trailing 
// zeroes in a factorial of a number

#include <iostream>
using namespace std;

// function prototype 
int trailingZero(int n);

// main function 
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "Zero: " << trailingZero(n) << endl;
}

// function to get trailing zeroes
int trailingZero(int n) {
    int zero = 0;

    for (int i = 5; i <= n; i = i * 5)
        zero += (n / i);
    
    return zero;
}