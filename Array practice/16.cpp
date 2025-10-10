//"Write a program to find the largest element in a given vector of integers."

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v ={11,23,13,44,15};
	
	int largest = 0;
	
	for(auto x:v) {
	    if(x>largest){
	        largest=x;
	    }
		
	}
	cout<<largest;
}
