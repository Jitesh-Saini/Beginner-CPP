// 10. Write a function to reverse a given number.

#include <iostream>
using namespace std;
int reverse(int a){
    int rev = 0;
    while(a!=0){
        int digit = a%10;
        rev = rev*10 + digit;
        a/=10;
    }
    return rev;
}
int main(){
    int val1;
    cout<<"enter value : ";
    cin>>val1;
    
    cout<<reverse(val1);
}