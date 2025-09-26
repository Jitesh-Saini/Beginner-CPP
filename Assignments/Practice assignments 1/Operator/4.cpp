// 4. Write a program to swap two numbers using a third variable.


#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    cout<<a<<b<<"\n";

    int c = a;
    a = b;
    b = c;

    cout<<a<<b<<"\n";


    return 0;
}
