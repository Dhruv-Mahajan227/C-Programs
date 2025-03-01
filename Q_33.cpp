//Question 33 
//C++ Program to Count the Number of Digits in a Given Number Using a While Loop

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) count = 1;
    
    while (num != 0) {
        num /= 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
