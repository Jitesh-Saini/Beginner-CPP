// 5 Move all zeros to the end while maintaining order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 3, 0, 2};
    vector<int> store;

    // step1
    for (auto x : v)
    {
        if (x != 0)
        {
            store.push_back(x);
        }
    }
    // step2
    int i = 0;
    for (auto x : store)
    {
        v[i] = x;
        i++;
    }

    // step3
    i++; // ye nhi bhi lagaye toh bhi chlega
    while (i < v.size())
    {
        v[i] = 0;
        i++;
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}