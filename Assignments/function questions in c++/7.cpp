//7. Write a function to calculate the simple interest. (Formula: SI = (P × R × T) / 100)


#include <iostream>
using namespace std;

int simpleinterest(int P, int R , int T){
    
    int si = (P*R*T)/100;

    return si;
    
}

int main(){
    int val1;
    cout<<"enter first value : ";
    cin>>val1;
    
    int val2;
    cout<<"enter second values : ";
    cin>>val2;
    
    int val3;
    cout<<"enter third values : ";
    cin>>val3;
    
    cout<<simpleinterest(val1,val2,val3);
}