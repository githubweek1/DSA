// C++ program to get all the prime numbers
// less than or equal to n

#include <bits/stdc++.h>
using namespace std;

// function prototype
void sieve(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    sieve(n);
}

// function to get all the prime
// number <= n
void sieve(int n) {
    vector<bool> isPrime(n+1, true);

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2*i; j <= n; j = j + i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}