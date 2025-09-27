//make a mix pyramid
// if n = 3
//      1
//    * * *
//  A B C D E

#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter no:";
	cin>>n;

	char temp = 'A';
	for(int i = 1; i <= n; i++) {

		for(int j = n; j >=1; j--) {
			if(j<=i) {
				if(i==1) {
					cout<<i;
				}
				if(i==2) {
					cout<<"* ";
				}
				if(i==3) {
					cout<<temp<<" ";
					temp++;
				}
			}
			else {
				cout<<"  ";
			}
		}
		for(int j = 2; j <=n; j++) {
			if(j<=i) {
				if(i==1) {
					cout<<i;
				}
				if(i==2) {
					cout<<"* ";
				}
				if(i==3) {
					cout<<temp<<" ";
					temp++;
				}
			}
			else {
				cout<<"  ";
			}
		}
		cout << endl;
	}
	return 0;
}



