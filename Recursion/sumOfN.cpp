// C++ program to get sum of first N natural 
// numbers using recursion

#include <iostream>
using namespace std;

// function prototype
int sum(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "sum: " <<  sum(n) << endl;
}

// function to get sum of n natural numbers
// using recursion
int sum(int n) {
    if (n <= 0)
        return 0;

    return n + sum(n - 1);
}