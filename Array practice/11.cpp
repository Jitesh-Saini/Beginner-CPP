// print the unique elements in sorted order.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v={1,9,9,10,11};
	set<int>s;
	

	for(auto x:v){
	    s.insert(x);
	    
	}
	
	for(auto x:s){
	    cout<<x;
	}
	

}