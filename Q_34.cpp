//Question 34 
//C++ Program to Print the Sum of All Even Numbers Between 1 and 100 Using a For Loop

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    cout << "Sum of all even numbers between 1 and 100: " << sum << endl;
    return 0;
}