//find third largest no. in array

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {3,8,9,4,7};

	int lar = 0;
	int seclar=0;
	int thirdlar=0;

	for(auto x:v) {
		if(x>lar) {
		    thirdlar=seclar;
		    seclar=lar;
			lar=x;
		}
		else if(x<lar && x>seclar) {
			seclar=x;
		}
		else if(x<lar && x<seclar && x>thirdlar){
		    thirdlar=x;
		} 
	}
	cout<<thirdlar;
}
