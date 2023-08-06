// tail recursive function

#include <iostream>
using namespace std;

// function prototype
void func(int n, int k);
int factorial(int n, int k);

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    func(n, 1);
    cout << endl;
}

// print 1 to N using tail recursion 
void func(int n, int k) {
    if (n == 0)
        return;
    
    cout << k << " ";
    func(n - 1, k + 1);
}

// factorial using tail recursion
int factorial(int n, int k) {
    if (n == 0 || n == 1)
        return k
    
    return factorial(n - 1, k * n);
}