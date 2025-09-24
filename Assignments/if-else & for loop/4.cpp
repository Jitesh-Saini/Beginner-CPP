// 4. Divisible by 3 and 5: Print all numbers from 1 to 100 that are divisible by both 3 and 5.

#include <iostream>
using namespace std;
int main(){

    for(int i=1;i<=100; i++){
        if(i%3==0 && i%5==0){
            cout<<i<<" :divisible by 3 and 5"<<"\n";
        }
        else{
            cout<<i<<" :not divisible by 3 and 5"<<"\n";
        }
    }

    return 0;
}