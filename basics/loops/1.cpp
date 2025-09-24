// Sum of all even numbers between 37 and -101

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;

    for (int i = 37; i >= -101; i--)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "sum:" << sum << "\n";

    return 0;
}