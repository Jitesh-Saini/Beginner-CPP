// 5. Write a program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    cout<<a<<b<<"\n";


    a = a+b;
    b = a-b;
    a = a-b;


    cout<<a<<b<<"\n";


    return 0;
}