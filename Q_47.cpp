//Question 57
//C++ Program to Reverse a Given String Using a For Loop

#include <iostream>
using namespace std;

int main() {
    string str, reversedStr = "";
    
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
