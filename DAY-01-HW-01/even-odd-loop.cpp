#include <iostream>
using namespace std;

int main()
{
    // This program checks if a number is even or odd using a loop
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    while (n > 1)
        n -= 2;
    if (n == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}