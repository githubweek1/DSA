// C++ program to check if a string is 
// palindrome using recursion

#include <bits/stdc++.h>
using namespace std;

// function prototype
bool checkPalindrome(string str, int start, int end);

// main function
int main() {
    string str = "";

    cout << "str: ";
    cin >> str;

    cout << checkPalindrome(str, 0, str.length() - 1) << endl;
}

// function to check if string is palindrome
bool checkPalindrome(string str, int start, int end) {
    if (start >= end)
        return true;

    return (str[start] == str[end] && checkPalindrome(str, start + 1, end - 1));
}