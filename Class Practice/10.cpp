//WAP to print name,city,state,marks using function and take input from user.

#include <iostream>
using namespace std;

void detail(string name , string city , string state , int marks){
    cout<<"Name : "<<name<<endl;
    cout<<"City : "<<city<<endl;
    cout<<"State : "<<state<<endl;
    cout<<"Marks : "<<marks<<endl;
}

int main(){
    string name, city, state;
    int marks;

    cout<<"Enter name : ";
    cin>>name;

    cout<<"Enter city : ";
    cin>>city;

    cout<<"Enter state : ";
    cin>>state;

    cout<<"Enter marks : ";
    cin>>marks;

    detail(name , city , state, marks);
}
