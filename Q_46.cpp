//Question 46
//C++ Program to Calculate the Sum of Digits of a Given Number Using a While Loop

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
