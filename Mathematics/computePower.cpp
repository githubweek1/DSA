// C++ program to compute the power of a to b

#include <iostream>
using namespace std;

// function prototype
int power(int a, int b);

// main function
int main() {
    int a, b;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "pow(a, b): " << power(a, b) << endl;
}

// function to computer power
int power(int a, int b) {

    if (b == 0) return 1;

    int temp = power(a, b / 2);
    temp = temp * temp;

    if (b % 2 == 0) {
        return temp;
    }
    else {
        return temp * a;
    }
}