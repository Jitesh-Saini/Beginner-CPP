// 8 Count the number of pairs with a given sum.

// count pairs with given sum in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,4,6,9,3,7};
    int sum=10;
    int count=0;
    int i=0;
    int j=v.size()-1;
    sort(v.begin(),v.end());
    while(i<j){
        if(v[i]+v[j]==sum){
            count++;
            i++;
            j--;
        }
        else if(v[i]+v[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<count;
    return 0;

    
}