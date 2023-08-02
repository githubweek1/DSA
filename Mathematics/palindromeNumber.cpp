// C++ program to check if number is palindrome 

#include <iostream>
using namespace std;

// function prototype
bool isPalindrome(int n);

// main function
int main() {
    int n;
    cout << "n: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome" << endl;
    else 
        cout << "Not Palindrome" << endl;
}

// function to chekc if number is palindrome
bool isPalindrome(int n) {
    int temp = n;
    int reverse = 0;

    while (temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    return (reverse == n);
}