// 10 Find the Maximum Element at Even Indices of the array.


#include <iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    int largest = arr[0];

    for(int i = 0; i<5; i++) {

        if(arr[i]>largest && arr[i]%2==0) {

            largest = arr[i];

        }

    }
    cout<<largest;
    return 0;

}

