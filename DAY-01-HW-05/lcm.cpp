#include <iostream>
using namespace std;
int main()
{
    // This program calculates the LCM of two numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int x = a, y = b;
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;
    int lcm = (a * b) / hcf;
    cout << "LCM: " << lcm << endl;
    return 0;
}