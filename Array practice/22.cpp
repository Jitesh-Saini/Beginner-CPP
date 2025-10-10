//find second largest no. in array

#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {3,8,6,4,7};
	
	int lar = 0;
	int seclar=0;
	
	for(auto x:v){
	    if(x>lar){
	        lar=x;
	    }
	    else if(x<lar && x>seclar){
	        seclar=x;
	    }
	}
	cout<<seclar;
}
