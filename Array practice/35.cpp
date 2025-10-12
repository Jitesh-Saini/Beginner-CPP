// 2 Reverse the array without using another array.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={0,1,2,4};
    reverse(v.begin(),v.end());
    
    for(auto x:v){
        cout<<x<<" ";
    }

    return 0;
}