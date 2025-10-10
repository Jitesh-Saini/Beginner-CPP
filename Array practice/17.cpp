//Write a program to find the sum of all elements in a given vector of integers.

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {11,23,13,44,15};

	int sum = 0;

	for(auto x:v) {

		sum+=x;

	}
	cout<<sum;
}
