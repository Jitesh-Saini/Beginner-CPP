// 15. Write a program to print the multiplication table of a number entered by the user.

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int temp=0;

	for(int i=1; i<=10; i++) {

		temp+=n;
		cout<<temp<<"\n";

	}


	return 0;
}