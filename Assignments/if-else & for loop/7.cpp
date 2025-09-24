// 7. Factorial of a Number: Take a number n from the user and calculate its factorial using a for loop.

#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial is: "<<fact<<"\n";
}