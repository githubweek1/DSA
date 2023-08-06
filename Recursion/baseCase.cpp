// C++ program for base cases of recursion

#include <iostream>
using namespace std;
int fib(int n);

// function prototype
int factorial(int n);

int main() {

}

// recursive function for factorial
int factorial(int n) {
    if (n < 1)
        return 1;
    
    return n * factorial(n - 1);
}

// recursive function for fibonacci
int fib(int n) {
    if (n <= 1)
        return n;
    
    return fib(n - 1) + fib(n - 2);
}