//make a pyramid
// if n = 3
//      *
//    * * *
//  * * * * *

#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter no:";
	cin>>n;


	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {
			if(j<=i) {
				cout<<"* ";
			}
			else {
				cout<<"  ";
			}

		}

		for(int j = 2; j <= n; j++) {
			if(j<=i) {
				cout<<"* ";
			}
			else {
				cout<<"  ";
			}

		}
		cout << endl;
	}
	return 0;
}