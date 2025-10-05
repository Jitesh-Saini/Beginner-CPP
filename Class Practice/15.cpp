//pattern:
//n=4;
//* * * *
//*     *
//* * * *

#include <iostream>
using namespace std;

int main()
{

	int n;
	cout << "enter no: ";
	cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{

		for (int j = 1; j <= n; j++)
		{
			if (i == 2 && j == 2 || i == 2 && j == 3)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
}


