// C++ program to calculate factorial of a number

#include <iostream>
using namespace std;

// function prototype
int factorial(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "Factorial: " << factorial(n) << endl;
}

// function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;

    for (int i = 2; i <= n; i++)
        fact = fact * i;
    
    return fact;
}