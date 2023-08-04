// C++ program to check if a given number is a power of 2

#include <iostream>
using namespace std;

// function prototype
bool isPower(int n);

int main() {
    int n;

    cout << "n: ";
    cin >> n;

    cout << n << " is power of 2: " << isPower(n) << endl;
}

// function to check if a number is power of 2
bool isPower(int n) {
    if (n == 0)
        return false;
        
    // using brian karningham algorithm
    n = n & (n - 1);

    return (n == 0);
}