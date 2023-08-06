// C++ program to print numbers 
// from 1 to N using recursion

#include <iostream>
using namespace std;

// function prototype
int print(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    print(n);
    cout << endl;
}

// recursive function to print from 1 to N
int print(int n) {
    if (n == 0)
        return 0;
    
    print(n - 1);
    
    cout << n << " ";
}