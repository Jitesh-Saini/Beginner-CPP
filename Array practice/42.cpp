// find intersection of two arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 3, 4};
    vector<int> v3;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                v3.push_back(v1[i]);
            }
        }
    }

    return 0;
}

// do it using map also
