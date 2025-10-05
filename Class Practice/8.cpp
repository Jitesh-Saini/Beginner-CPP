//wap to write n+1 using function

#include <iostream>
using namespace std;

int print(int a)
{
    a = a + 1;
    return a;
}

int main()
{

    cout << print(5);
}
