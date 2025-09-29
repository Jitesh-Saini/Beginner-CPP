// 6. Write a function to swap two numbers using call by value.

#include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout<<"after swapping inside function : "<<a<<" "<<b<<endl;
}
int main() {
    int val1, val2;
    cout<<"enter value 1 : ";
    cin>>val1;
    
    cout<<"enter value 2 : ";
    cin>>val2;
    
    swap(val1, val2);
    cout<<"after swapping inside main function : "<<val1<<" "<<val2<<endl;
}