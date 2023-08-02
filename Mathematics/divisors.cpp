// C++ program to print divisors of a number
// in increasing order

#include <iostream>
using namespace std;

// function prototype 
void divisor(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    divisor(n);
}

// function to print all the divisors
void divisor(int n) {
    int i;

    // print all divisors from 1 to sqrt(n)
    for (i = 1; i*i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    // print all divisors from sqrt(n) to n
    for (; i >= 1; i--) {
        if (n%i == 0) {
            cout << n / i << " ";
        }
    }
    cout << endl;
}