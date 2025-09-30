// 8. Write a function to print the table of a given number.


#include <iostream>
using namespace std;
void table(int a){
    for(int i=1; i<=10; i++){
        cout<<a<<"*"<<i<<" : "<<a*i<<endl;
    }
}

int main(){
    int val1;
    cout<<"enter value : ";
    cin>>val1;
    
    table(val1);
}
