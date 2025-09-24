// 6. Voting Eligibility (Multiple People): Ask the user for the ages of 5 people. For each age, check if
// they are eligible to vote (>=18) or not..

#include <iostream>
using namespace std;
int main(){

    for(int i=1; i<=5; i++){
        int age;
        cin>>age;
        if(age>=18){
            cout<<"eligible to vote"<<"\n";
        }
        else{
            cout<<"not eligible to vote"<<"\n";
        }
    }

}   