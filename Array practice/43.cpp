// union of two arrays

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {3,4,5,6};
    set<int> s;

    for(int i=0;i<v1.size();i++){
        s.insert(v1[i]);
    }
    for(int j=0;j<v2.size();j++){
        s.insert(v2[j]);
    }

    for(auto x:s){
        cout<<x<<" ";
    }
    
    return 0;

    
}


