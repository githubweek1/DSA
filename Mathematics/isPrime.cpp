// C++ program to check if the number is prime

#include <iostream>
using namespace std;

// function prototype
bool isPrime(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    if (isPrime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

// function to check if the number is prime
bool isPrime(int n) {
    // corner cases
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