// 4 Remove duplicates from an array.


#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {1,1,6,2,2};
	set<int>s;


	for(auto x:v) {
		s.insert(x);
	}

	for(auto x:s) {

		cout<<x;
	}
}