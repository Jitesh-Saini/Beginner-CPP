// 5. Write a function that takes a number and returns its factorial.


#include <iostream>
using namespace std;

int factorial(int a) {

	int fact = 1;
	for(int i = 1; i<=a; i++) {
    
		fact*=i;

	}
	return fact;
}

int main() {
	int val1;
	cout<<"enter value : ";
	cin>>val1;

	cout<<factorial(val1);
}
