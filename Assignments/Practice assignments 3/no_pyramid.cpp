//make a no pyramid
// if n = 3
//      1
//    2 3 4
//  5 6 7 8 9


#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter no:";
	cin>>n;

	int temp = 1;
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



