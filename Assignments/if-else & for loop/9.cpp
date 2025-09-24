// 9. Palindrome Number Check: Input a number (like 121 or 1331) and check if it is a palindrome
// using loop and if-else.

#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int originaln=n;
    int rev=0;

    for(;n!=0;){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(rev==originaln){
        cout<<"palindrome"<<"\n";
    }
    else{
        cout<<"not palindrome"<<"\n";
    }

}