// 16. Write a program to print all even numbers between 1 and 100.


#include <iostream>
using namespace std;

int main()
{

	for(int i=1; i<=100; i++) {

		if(i%2==0){
		    cout<<i<<"\n";
		}

	}


	return 0;
}