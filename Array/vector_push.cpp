#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v = {1,2,3,4,5} ;
	
	for(int i=0; i<v.size(); i++) {
		cout<<v[i]<<" "<<endl;
	}
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	
	cout<<endl<<v.size()<<endl<<endl;
	
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	
	for(int i=0; i<v.size(); i++) {
		cout<<v[i]<<" ";
	}

}
