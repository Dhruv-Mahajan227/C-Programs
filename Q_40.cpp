//Question 40 
//C++ Program to Find the Sum of the Digits of a Given Number Using a While Loop

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
