// 10. Find Prime Numbers in a Range: Take a number n and print all prime numbers from 1 to n using
// for loop and conditions.


#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        bool isprime=true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" :prime"<<"\n";
        }
        else{
            cout<<i<<" :not prime"<<"\n";
        }
    }

}