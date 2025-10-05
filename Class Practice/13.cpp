//pattern:
//A B C D
//A B C D
//A B C D
//A B C D



#include <iostream>
using namespace std;

int main() {

	int n;
	cout<<"enter no: ";
	cin>>n;

	for(int i = 1 ; i<=n; i++) {
		char temp = 'A';
		for(int j = 1; j<=n; j++) {
			cout<<temp<<" ";
			temp++;
		}
		cout<<endl;
	}
}
