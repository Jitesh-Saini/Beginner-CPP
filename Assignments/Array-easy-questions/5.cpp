// 5 Count how many Even and Odd numbers are present in an array.

#include <iostream>
using namespace std;

int main(){
    
    int even = 0;
    int odd = 0;

    int arr[5]= {1,2,3,4,5};
    for(int i = 0; i<5; i++) {

        if(arr[i]%2==0) {
            even++;
        }
        else {
            odd++;
        }

    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd;
    return 0;

}
