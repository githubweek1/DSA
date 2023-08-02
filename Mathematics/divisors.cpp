// C++ program to print divisors of a number
// in increasing order

#include <iostream>
using namespace std;

// function prototype 
void divisor(int n);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    divisor(n);
}

void divisor(int n) {
    for (int i = 1; i <= n; i++) 
        if (n % i == 0)
            cout << i << " ";
    
    cout << endl;
}