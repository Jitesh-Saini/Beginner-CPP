//PATTERN:
//n=3;
// C B A
// C B A
// C B A


#include <iostream>
using namespace std;

int main() {

	int n;
	cout<<"enter no: ";
	cin>>n;

	for(int i = 1 ; i<=n; i++) {
		char temp = 'C';
		for(int j = 1; j<=n; j++) {
			cout<<temp<<" ";
			temp--;
		}
		cout<<endl;
	}
}
