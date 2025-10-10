//Write a program to count the number of positive and negative integers in a given vector.
#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {21,-90,89,-11,21};

	int pos = 0;
	int neg = 0;


	for(auto x:v) {

		if(x>0) pos++;
		else neg++;

	}
	cout<<"pos are:"<<pos<<endl;
	cout<<"neg are:"<<neg<<endl;
}