// QUESTION 30
# include <iostream>
using namespace std;
int main()
{
    int num, number = 0, remainder;
    cout << "Enter a number=";
    cin>> num;
    while (num != 0)
    {
        remainder = num % 10 ;
        number = number*10 + remainder;
        num /= 10;
    }
    cout<< "The reverse of " << num << "is = " << number;
    return 0; 
}