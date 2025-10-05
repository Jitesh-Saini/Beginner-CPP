//pattern:
//1 2 3 4
// 1 2 3
//  1 2
//   1


#include <iostream>
using namespace std;

int main() {

	int n;
	cout<<"enter no: ";
	cin>>n;

	for(int i = 1 ; i<=n; i++) {
		int temp = 1;
		for(int j = 1; j<=n; j++) {
			if(j>=i) {
				cout<<temp<<" ";
				temp++;
			}
			else {
				cout<<" ";
			}

		}
		cout<<endl;
	}
}
