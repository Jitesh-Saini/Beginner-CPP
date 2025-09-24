// 8. Reverse a Number: Input a number (like 1234) and print its reverse (4321) using only a for loop
// and operators.

#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int rev=0;

    for(;n!=0;){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    cout<<"Reverse is: "<<rev<<"\n";

}



