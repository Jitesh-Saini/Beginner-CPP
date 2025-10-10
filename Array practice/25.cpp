// 3 Count frequency of each element in an array.

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {1,1,6,2,2};
	map<int,int>m;


	for(auto x:v) {
		m[x]++;
	}

	for(auto x:m) {

		cout<<x.first<<"->"<<x.second<<endl;
	}
}
