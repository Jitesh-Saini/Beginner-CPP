// 20. Write a program to check whether a number is prime or not.


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0;

	if(n<=1) {
		cout<<"not prime no.";
		return 0;
	}
	else {

		for(int i=1; i<=n; i++) {
			if(n%i==0) {
				count++;
			}
		}
	}

	if(count==2) cout<<"prime";
	else cout<<"not prime";

	return 0;
}

