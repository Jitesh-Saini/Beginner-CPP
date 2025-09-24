// Write a program to print "hello world" n times, where n is provided by the user.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<"hello world"<<"\n";
    }
}