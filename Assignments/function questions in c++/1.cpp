// 1. Write a function to add two numbers and return the sum.

#include <iostream>
using namespace std;

int sum(int a, int b){
    
    return a+b;
}

int main(){
    int val1;
    cout<<"enter value 1 : ";
    cin>>val1;
    
    int val2;
    cout<<"enter values 2 : ";
    cin>>val2;
    
    cout<<sum(val1,val2);
}