// 8 Count how many Positive and Negative numbers are in the array.

#include <iostream>
using namespace std;

int main(){
    int positive = 0;
    int negative = 0;

    int arr[5]={1,-2,3,-4,5};

    for(int i = 0; i<5; i++) {

        if(arr[i]>=0) {
            positive++;
        }
        else {
            negative++;
        }

    }
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative;
    return 0;
}