// Find the greatest of three numbers

#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b && a>c){
        cout<<"a greater"<<a;
    }
    else if(b>a && b>c){
        cout<<"b greater"<<b;
    }if(c>a && c>b){
        cout<<"c greater"<<c;
    }

    return 0;
}
