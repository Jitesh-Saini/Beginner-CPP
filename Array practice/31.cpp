// 10 Merge two arrays into a third array.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 6, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};
    vector<int> ans = {};

    for (auto x : v1)
    {
        ans.push_back(x);
    }
    for (auto x : v2)
    {
        ans.push_back(x);
    }

    for (auto x : ans)
    {
        cout << x;
    }
}
