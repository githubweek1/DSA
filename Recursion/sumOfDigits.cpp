// C++ program to get sum of digits 
// using recursion

#include <iostream>
using namespace std;

// function prototype
int getSum(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "sum of digits: " << getSum(n) << endl;
}

// Function to get sum of digits
// using recursion
int getSum(int n) {
    if (n <= 9)
        return n;

    return ((n%10) + getSum(n / 10));
}