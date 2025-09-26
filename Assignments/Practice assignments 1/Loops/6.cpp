// 18. Write a program to reverse a number (e.g., input: 123 -> output: 321).


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int digit;
    int rev;
	for(; n!=0;) {

		digit = n%10;
		rev = rev*10+digit;
		n=n/10;
		
	}

		cout<<rev<<"\n";

	return 0;
}