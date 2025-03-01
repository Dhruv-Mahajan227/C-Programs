//QUESTION 28
# include <iostream>
using namespace std;
int main()
{
    int num, i=1;
    cout<< "enter a number:"<< endl;
    cin>>num;
    cout<< "the table of"<< num <<"=\n";
do
    {
        cout<< num << "x" << i << "=" << num*i << endl;
        i++;
    }
while(i<=10);
    return 0;
}