//Question 53
//C++ Program to Convert a Binary Number to a Decimal Number Using a While Loop

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary, decimal = 0, remainder, base = 1;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
