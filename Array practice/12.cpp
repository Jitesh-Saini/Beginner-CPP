// count the frequency of each unique element and print the result in ascending order of the elements.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v={1,1,2,3,3,};
	map<int,int>m;
	
	for(auto x:v){
	    m[x]++;
	}
	
	for(auto x:m){
	    cout<<x.first<<"->"<<x.second<<endl;
	}
	
}