// Question 63
//C++ Program to Count the Frequency of Each Character in a String Using a For Loop

#include <iostream>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str) {
        freq[ch]++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
