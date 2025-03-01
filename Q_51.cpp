//Question 51
//C++ Program to Find the Sum of All Even and Odd Numbers Between 1 and 100 Using Separate For Loops

#include <iostream>
using namespace std;

int main() {
    int evenSum = 0, oddSum = 0;

    for (int i = 2; i <= 100; i += 2) {
        evenSum += i;
    }

    for (int i = 1; i <= 100; i += 2) {
        oddSum += i;
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
