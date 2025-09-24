//write a program to check whether a number is even or odd using if-else statement.

#include <iostream>
using namespace std;
int main() {
    
    int a;
    cout << "Enter number: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << a << " is even\n";
    } else {
        cout << a << " is odd\n";
    }

    return 0;
}