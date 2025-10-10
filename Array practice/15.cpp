// Write a program to take 5 integers as input from the user, store them in a vector, and then print the elements of the vector.

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v;

	for(int i=1; i<=5; i++) {
	    
		int n;
		cin>>n;
		v.push_back(n);

	}
	for(auto x:v) {
		cout<<x<<" ";
	}
}
