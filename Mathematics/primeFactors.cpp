// C++ program to get all the prime factors of a number

#include <iostream>
using namespace std;

// function prototype
void primeFactors(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    primeFactors(n);
}

void primeFactors(int n) {
    if (n <= 1) return;

    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
        cout << n;

    cout << endl;
}
