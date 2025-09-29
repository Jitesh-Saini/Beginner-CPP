// 2. Write a function to find the maximum of two numbers.

#include <iostream>
using namespace std;

int greaterr(int a, int b){

    if(a>b) return a;
    else return b;
}

int main(){
    int val1;
    cout<<"enter first value : ";
    cin>>val1;
    
    int val2;
    cout<<"enter second values : ";
    cin>>val2;
    
    cout<<greaterr(val1,val2);
}