// print third largest no. in vector
//print_3rd_large_using_for_auto_loop

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {11, 25, 13, 45, 65};

    int largest = 0;
    int secondlargest = 0;
    int thirdlargest = 0;

    for (auto x : v)
    {
        if (x > largest)
        {
            thirdlargest = secondlargest;
            secondlargest = largest;
            largest = x;
        }
        else if (x < largest && x < secondlargest && x > thirdlargest)
        {
            thirdlargest = x;
        }
    }
    cout << thirdlargest;
}
