// 9. Write a function to calculate the area of a circle. (Formula: Area = π × r × r)

#include <iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}
int main(){
    int val1;
    cout<<"enter radius : ";
    cin>>val1;
    
    cout<<area(val1);
}