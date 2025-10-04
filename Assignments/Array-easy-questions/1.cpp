// 1 Find the Largest Element in an array.

#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    int largest = arr[0];

    for(int i = 0; i<5; i++) {

        if(arr[i]>largest) {

            largest = arr[i];

        }

    }
    cout<<largest;
    return 0;

}