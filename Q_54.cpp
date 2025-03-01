//Question 54
//C++ Program to Print All Prime Numbers Between Two Given Numbers Using a For Loop

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start, end;

    cout << "Enter two numbers: ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
