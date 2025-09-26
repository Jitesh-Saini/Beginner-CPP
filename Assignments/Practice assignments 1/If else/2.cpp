// 7. Write a program to check whether a person is eligible to vote (age >= 18).

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;
    
    if(age>=18){
        cout<<"eligible to vote";
    }
    else{
        cout<<"not eligible to vote";
    }
    
    return 0;
}