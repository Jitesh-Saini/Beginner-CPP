// 8 Rotate array elements by 1 position to the left.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,6,4,5};
    int temp =v[0];
    
    for(int i=1; i<v.size();i++){
        v[i-1]=v[i];
    }
    v[v.size()-1]=temp;
    
    for(auto x:v){
        cout<<x;
    }
}