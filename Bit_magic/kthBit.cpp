// C++ program to check if kth bit is set

#include <iostream>
using namespace std;

// function ptototype
bool kthBit(int n, int k);

// main function
int main() {
    int n, k;

    cout << "n: ";
    cin >> n;

    cout << "k: ";
    cin >> k;
    
    cout << kthBit(n, k) << endl;
}

// function to check if kth bit is set
bool kthBit(int n, int k) {
    n = n >> (k - 1);
    return (n&1);
}