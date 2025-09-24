// Print all odd numbers between 1 to 12

#include <iostream>
using namespace std;

int main()
{

    int oddsum = 0;

    for (int i = 1; i <= 12; i++)
    {
        if (i % 2 != 0)
        {
            cout << i;
        }
    }

    return 0;
}
