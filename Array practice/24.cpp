//find second smallest no.

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {3,9,6,4,7};

	int small = INT_MAX;
	int secsmall=INT_MAX;

	for(auto x:v) {
		if(x<small) {
		    secsmall=small;
			small=x;
		}
		else if(x<secsmall && x>small) {
			secsmall=x;
		}
	}
	cout<<secsmall;
}

