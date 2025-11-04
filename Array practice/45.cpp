// C++ program to find maximum sum of k

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v= {1,4,6,3,2};
	int k=2;

	int ans = 0;
	for(int i=0; i<v.size(); i++) {
		int count=0;
		int sum=0;
		for(int j=i; j<v.size(); j++) {
			sum+=v[i];
			count++;
			if(sum>ans && count==k) {
				ans=sum;
			}
			cout<<ans<<" ";
		}

	}
	return 0;
}



