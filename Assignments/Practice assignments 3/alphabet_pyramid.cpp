//make a pyramid with alphabets
// if n = 3
//      A
//    B C D
//  E F G H I


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
				cout<<temp<<" ";
				temp++;
			}
			else {
				cout<<"  ";
			}
		}

		for(int j = 2; j <= n; j++) {
			if(j<=i) {
				cout<<temp<<" ";
				temp++;
			}
			else {
				cout<<"  ";
			}
		}
		cout << endl;
	}
	return 0;
}



