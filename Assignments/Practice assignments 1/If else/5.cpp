// 10. Write a program to check whether a number is positive, negative, or zero.


#include <iostream>
using namespace std;

int main() {
    
   int a;
   cin>>a;
   
   if(a>0){
       cout<<"+ve";
   }
   else if(a<0){
       cout<<"-ve";
   } 
   else{
       cout<<"zero";
   }

    return 0;
}