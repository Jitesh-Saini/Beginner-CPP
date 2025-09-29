// 4. Write a function to check whether a number is even or odd.



#include <iostream>
using namespace std;

string evenodd(int a) {
	if(a%2==0) return "even";
	else return "odd";
}

int main() {
	int val1;
	cout<<"enter value : ";
	cin>>val1;

	cout<<evenodd(val1);
}