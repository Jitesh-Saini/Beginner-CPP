//count even odd

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v= {1,2,3,4,5};
	
	int even = 0;
	int odd = 0;
	
	for(auto x:v){
	    if(x%2==0) even++;
	    else odd++;
	}
	cout<<even<<"\n";
	cout<<odd;

}


