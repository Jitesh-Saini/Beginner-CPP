// 19. Write a program to check whether a number is a palindrome (same forward and backward).

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int real = n;
	int digit;
	int rev=0;
	for(; n!=0;) {

		digit = n%10;
		rev = rev*10+digit;
		n=n/10;

	}

	cout<<rev<<"\n";

	if(real==rev) {
		cout<<"palindrom";
	}
	else {
		cout<<"not palindrom";

	}

	return 0;
}
