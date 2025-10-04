// 9 Check if the Array is Sorted in ascending order or not.

#include <iostream>
using namespace std;
int main(){

    int arr[5]={1,2,3,4,5};

    for(int i=0; i<5;i++){
        if(arr[i]>arr[i+1]){
            cout<<"not sorted in ascending order";
        }
        else cout<<"sorted in ascending order";
    }
}