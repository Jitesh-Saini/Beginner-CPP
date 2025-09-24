// 3. Positive, Negative, or Zero Counter: Ask the user to enter 10 numbers one by one. Count how
// many are positive, negative, or zero using if-else.


#include <iostream>
using namespace std;
int main(){

    int positivecount=0;
    int negativecount=0;
    int zerocount=0;

    for(int i=1; i<=10; i++){
        int n;
        cin>>n;
        if(n>0){
            positivecount++;
        }
        else if(n<0){
            negativecount++;
        }
        else{
            zerocount++;
        }
    }

    cout<<"Positive count is: "<<positivecount<<"\n";
    cout<<"Negative count is: "<<negativecount<<"\n";
    cout<<"Zero count is: "<<zerocount<<"\n";

}