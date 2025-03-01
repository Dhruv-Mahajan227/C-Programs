//Question 56
//C++ Program to Calculate the Sum of the Harmonic Series Up to n Terms Using a For Loop

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum of the harmonic series: " << sum << endl;
    return 0;
}
