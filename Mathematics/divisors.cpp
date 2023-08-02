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
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";

            if (i != n / i) {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}