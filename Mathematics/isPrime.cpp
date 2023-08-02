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
    
    if (n == 1)
        return false;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) 
            return false;
    }
    return true;
}