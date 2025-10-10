// Given a list of characters, count the frequency of each unique character and print the result in ascending alphabetical order.


#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<char>v={'A','A','B','C','C',};
	map<char,int>m;
	
	for(auto x:v){
	    m[x]++;
	}
	
	for(auto x:m){
	    cout<<x.first<<"->"<<x.second<<endl;
	}
	
}          
