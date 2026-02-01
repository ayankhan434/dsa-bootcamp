#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year you wanted to check leap year or not :";
    cin >> year;
    if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0)
    {
        cout << year << "is a leap year";
    }
    else
    {
        cout << year << " wrong choice sweatheart, this is not a leap year";
    }
    return 0;
}