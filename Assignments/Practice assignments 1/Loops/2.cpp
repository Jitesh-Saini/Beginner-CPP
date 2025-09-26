// 14. Write a program to print the sum of the first 10 natural numbers.


#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
	for(int i=1; i<=10; i++){
	    
	    cout<<i<<"\n";
	    sum=sum+i;
	    
	}
    
    cout<<"sum:"<<sum;
    
	return 0;
}
