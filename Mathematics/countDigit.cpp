// C++ program to count the number of digits in a given integer

#include <iostream>
using namespace std;

// Function prototype
int countDigit(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    cout << "digit: " << countDigit(n) << endl;
}

// Function to count digits in a number
int countDigit(int n) {
    int count = 0;

    if (n < 0)      // if n is negative
        n = -n;
    else if (n == 0)    // if n is 0
        return 1;

    while (n > 0) {     // general case
        count++;
        n = n / 10;
    }

    return count;
}