// 2. Sum of Even and Odd Numbers: Take a number n from the user. Using a for loop, find the sum
// of all even numbers and the sum of all odd numbers from 1 to n.


#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int evensum=0;
    int oddsum=0;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            evensum+=i;
        }
    }
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            oddsum+=i;
        }
    }

    cout<<"Even sum is: "<<evensum<<"\n";
    cout<<"Odd sum is: "<<oddsum<<"\n";
    


}