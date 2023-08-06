// C++ program to print numbers from N to 1
// using recursion

#include <iostream>
using namespace std;

// Function prototype
int print(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    print(n);
    cout << endl;
}

// Function to print N to 1
int print(int n) {
    if (n == 0)
        return 0;
    
    cout << n << " ";
    print(n - 1);
}