#include <iostream>
using namespace std;
int main()
{
    // For loop
    int i = 1;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << "\n";
    }
    // While loop

    while (i <= 7)
    {
        cout << i;
        i++;
    }
    // Do-while loop

    do
    {
        cout << i << "\n";
        i++;
    } while (i <= 13);

    return 0;
}