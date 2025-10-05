//find target value
// like n = 3, is it present in array or not



#include <iostream>
using namespace std;

int main()
{


	int arr[5]= {1,2,3,4,5};

	for(int i = 0; i<5; i++) {

		int target = 3;

		if(arr[i]==target) {

			cout<<"present at index:"<<i;

		}

	}


	return 0;
}
