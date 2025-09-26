// find sum of even and odd numbers between -33 to 109 and their difference

#include <iostream>
using namespace std;


int main()
{
	int i = -33;
	int even= 0;
	int odd = 0;
	while(i<=109) {

		if(i%2==0) {
			even = even + i;
		}
		else {
			odd = odd + i;

		}

		i++;
	}
	
	int sub = even - odd;
	
	cout<<even<<endl;
	cout<<odd<<endl;
	cout<<sub;

	return 0;
}
