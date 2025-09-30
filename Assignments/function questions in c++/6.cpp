// 6. Write a function to swap two numbers using call by value.

#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapping value : " << a << b << endl;
}

int main()
{
    int val1, val2;
    cout << "enter first value : ";
    cin >> val1;

    cout << "enter second value : ";
    cin >> val2;

    cout << "Your entered value : " << val1<< val2 << endl;
    swap(val1, val2);
}