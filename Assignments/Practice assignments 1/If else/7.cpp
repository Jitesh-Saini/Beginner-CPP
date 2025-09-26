// 12. Write a program to calculate the grade of a student based on marks:
// - >=90 -> A
// - >=75 -> B
// - >=50 -> C
// - <50 -> Fail


#include <iostream>
using namespace std;

int main()
{
	int marks;
	cin>>marks;
	if(marks>=90) cout<<"A";
	else if(marks>=75) cout<<"B";
	else if(marks>=50) cout<<"C";
	else cout<<"fail";



	return 0;
}