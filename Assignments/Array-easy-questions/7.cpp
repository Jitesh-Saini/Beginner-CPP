// 7 Search whether a given element x is present in the array or not.

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    for (int i = 0; i < 5; i++)
    {

        if (arr[i] == x)
        {

            cout << "Element is present is array found at index: " << i;
          
        }
    }

    return 0;
}
