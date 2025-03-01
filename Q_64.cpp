// Question 64
//C++ Program to Convert a Decimal Number to a Binary Number Using a While Loop

#include <iostream>
using namespace std;

int main() {
    int decimal, binary[32], i = 0;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    while (decimal > 0) 
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}
