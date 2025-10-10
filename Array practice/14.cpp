// Given a list of characters, reverse the list and print the characters in the reversed order.

#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<char>v={'A','A','B','D','C','B'};
	map<char,int>m;
	
	reverse(v.begin(),v.end());
	// 	sort(v.begin(),v.end());


	for(auto x:v){
	    cout<<x;
	}
	
}          
