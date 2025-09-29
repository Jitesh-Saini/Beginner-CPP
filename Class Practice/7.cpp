// Write a function to check whether two numbers are even or odd using function.    

#include <iostream>
using namespace std;

string greaterr(int a , int b){
    if(a%2==0 && b%2==0) return "even";
    else if (a%2!=0 && b%2!=0) return "odd";
    else return "one even and one odd";
}

int main(){
   
   
    cout<<greaterr(10,12);
}