// 1. Even or Odd (Multiple Numbers): Write a program to print whether each number from 1 to 50 is
// even or odd using a for loop.

#include <iostream>
using namespace std;
int main(){

    for(int i = 1; i<=50; i++){
        if(i%2==0){
            cout<<i<<": even"<<"\n";
        }
        else{
            cout<<i<<": odd"<<"\n";
        }
    }

}