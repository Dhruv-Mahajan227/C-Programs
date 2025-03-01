//QUESTION 29
# include <iostream>
using namespace std;
int main()
{
    int num, i, factorial=1;
    cout << "Enter a num for factorial : " ;
    cin >> num;
    if (num<0)
    {
        cout<< "the factorial of negetive number is not define ";
    }
    else
    {
        for (i=1; i<=num; i++)
        {
            factorial *= i;
        }
        cout<< "the factorial of " << num << " is= " << factorial << endl;
    }
    return 0;
