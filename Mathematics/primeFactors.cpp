// C++ program to get all the prime factors of a number

#include <iostream>
using namespace std;

// function prototype
void primeFactors(int n);
bool isPrime(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    primeFactors(n);
}

void primeFactors(int n) {
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            int x = i;
            while (n % x == 0) {
                cout << i << " ";
                x = x * i;
            }
        }
    }

    cout << endl;
}

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (int i = 5; i*i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}