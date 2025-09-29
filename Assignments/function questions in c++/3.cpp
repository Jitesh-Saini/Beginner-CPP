// 3. Write a function to calculate the square of a number.


#include <iostream>
using namespace std;

int square(int a){
 return a*a;
}

int main(){
    int val1;
    cout<<"enter value : ";
    cin>>val1;
    
    cout<<square(val1);
}