// 1 Find the missing number in an array of 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 4};
    // sum of all values
    int sum1 = 0;
    for (auto x : v)
    {
        sum1 += x;
    }
    // sum of 0 to n;
    int sum2 = 0;
    for (int i = 0; i <= v.size(); i++)
    {
        sum2 += i;
    }

    cout << sum2 - sum1;

    return 0;
}

// another way

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {0, 1, 2, 4};
//     int n = v.size();
//     int sum1 = 0;
//     for (auto x : v)
//     {
//         sum1 += x;
//     }

//     int sum2 = n * (n + 1) / 2;

//     cout << sum2 - sum1;

//     return 0;
// }
