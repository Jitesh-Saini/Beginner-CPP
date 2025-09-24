// 5. Greatest of Three Numbers: Input three numbers from the user and find the largest number using
// only if-else.

#include <iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is greatest: "<<a;
        }
        else{
            cout<<"c is greatest: "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest: "<<b;
        }
        else{
            cout<<"c is greatest: "<<c;
        }
    }

}