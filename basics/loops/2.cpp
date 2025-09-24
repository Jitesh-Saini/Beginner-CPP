// Sum of even numbers from 1 to 10 and odd numbers from 30 to 90

#include <iostream>
using namespace std;

int main()
{

    int evensum = 0;
    int oddsum = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            evensum += i;
        }
    }
    for (int i = 30; i <= 90; i++)
    {
        if (i % 2 != 0)
        {
            oddsum += i;
        }
    }

    cout << "is:" << evensum + oddsum << "\n";

    return 0;
}