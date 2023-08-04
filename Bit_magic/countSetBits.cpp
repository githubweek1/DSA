// C++ program to count number of set 
// bits in a given integer

#include <iostream>
using namespace std;

// function prototype
int countBits(int n);

// main function
int main() {
    int n;

    cout << "n: ";
    cin >> n;

    cout << "set bits: " << countBits(n) << endl;
}

// function to count number of set bits
int countBits(int n) {
    int count = 0;

    // check for negative number
    if (n < 0) {
        n = -n;
        return 1 + countBits(n);
    }

    // check for positive number and zero
    while (n != 0) {
        count = count + (n&1);
        n = n >> 1;
    }
    return count;
}