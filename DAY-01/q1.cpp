// even or odd number checker
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is a even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }

    // // second methood
    if ((number / 2) * 2 == number)
    {
        cout << number << " is a even number." << endl;
    }
    else
    {
        cout << number << " is an odd number." << endl;
    }

    // // methood 3
    if (number & 1)
    {
        cout << number << " is a odd number." << endl;
    }
    else
    {
        cout << number << " is a even number." << endl;
    }
    return 0;
}