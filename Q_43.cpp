//Question 43 
//C++ Program to Print the First N Even Numbers Using a For Loop

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of even numbers to print: ";
    cin >> n;

    cout << "First " << n << " even numbers: ";
    for (int i = 1; i <= n; i++) {
        cout << 2 * i << " ";
    }
    cout << endl;
    return 0;
}
