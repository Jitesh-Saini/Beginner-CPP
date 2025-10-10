//avg:

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {21,90,89,11,21};

	int sum = 0;

	for(auto x:v) {

		sum+=x;

	}
	int avg=sum/v.size();
	cout<<avg;
}