// 7 Print all unique elements of an array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 4, 6, 3, 2, 2, 3, 4, 1};
    set<int> s;
    
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
    return 0;
}
