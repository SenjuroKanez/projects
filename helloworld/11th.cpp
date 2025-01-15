#include <iostream>
using namespace std;

// Function prototypes
void isPalindromeBorn(int n);
void is2(int n);

int main() {
    int num;
    cout << "Hello sir, please enter a number up to 9 digits\n";
    cin >> num;

    if (num >= 100 && num <= 999999999) { // Fixed condition
        isPalindromeBorn(num);
    } else if (num >= 100 && num <= 999) { // Fixed condition
        is2(num);
    } else {
        cout << "Error\n";
    }

    return 0; // Added return statement
}

// Function to check if a number is palindrome-born
void isPalindromeBorn(int n) {
    int reversed = 0;
    int original = n;

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome-born number.\n";
    } else {
        cout << original << " is not a palindrome-born number.\n";
    }
}

// Function to check if a 3-digit number is same when reversed
void is2(int n) {
    int reversed = 0;
    int original = n;

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is the same when reversed.\n";
    } else {
        cout << original << " is not the same when reversed.\n";
    }
}
