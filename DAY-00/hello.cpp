#include<iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    // 1

    string name="ayan khan ";
    cout << "My name is " << name << endl;
    
    //initialisation
    int man=10;

    // variable ddclaration
    int age;
    age=12;
    cout << "My age is " << age << endl;

    float pi;
    pi=3.14;
    cout << "Value of pi is " << pi << endl;

    //multiple variable 
    int a=5, b=10, c=15;
    cout << "Values are a: " << a << ", b: " << b << ", c: " << c << endl;

    // relational operators
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than c? " << (a < c) << endl;
    cout << "Are a and b equal? " << (a == b) << endl;
    cout << "Are b and c not equal? " << (b != c) << endl;

    // logical operators
    cout << "Is a less than b AND b less than c? " << ((a < b) && (b < c)) << endl;
    cout << "Is a less than b OR b greater than c? " << ((a < b) || (b > c)) << endl;
        cout << "Is NOT (a greater than b)? " << (!(a > b)) << endl;

        // complete example program
    

    return 0;
}