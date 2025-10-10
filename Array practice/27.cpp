// 5 Copy all elements of one array into another.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> ans;
    
    for(auto x : v){
        ans.push_back(x); // copy each element from v to ans
    }
    
    for(auto x : ans){
        cout << x;
    }
}
