//Question 45
//C++ Program to Print Numbers from 1 to 100, Replacing Multiples of 3 with "Fizz" and Multiples of 5 with "Buzz"

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz ";
        else if (i % 3 == 0)
            cout << "Fizz ";
        else if (i % 5 == 0)
            cout << "Buzz ";
        else
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
