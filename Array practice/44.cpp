//sum of elements in vector with function

#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int>v){
    int sum=0;
    for(auto x:v){
        sum+=x;
    }
    cout<<sum;
}

int main()
{
    vector<int>v={1,2,3,4,5};
    printvector(v);
    return 0;
}
