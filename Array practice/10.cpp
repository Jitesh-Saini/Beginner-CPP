//print +ve,-ve value count

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v= {1,2,-3,4,5};
	
	int positive = 0;
	int negative = 0;
	
	for(auto x:v){
	    if(x>0) positive++;
	    else negative++;
	}
	cout<<"positive are : "<<positive<<"\n";
	cout<<"negative are :"<<negative;

}
