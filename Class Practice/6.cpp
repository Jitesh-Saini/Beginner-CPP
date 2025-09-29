// Write a function to find the greatest of three numbers using function.

#include <iostream>
using namespace std;

int greaterr(int a , int b , int c){
    
    int greatest = a;
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;

}

int main(){

    cout<<greaterr(10,5,3);
}

