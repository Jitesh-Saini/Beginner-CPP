// 8. Write a program to find the greatest of two numbers.

#include <iostream>
using namespace std;
int main() {
    
    int a;
    int b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is greater\n";
    } else {
        cout << b << " is greater\n";
    }

    return 0;
}