// Check eligibility for voting and marks


#include <iostream>
using namespace std;

int main()
{
    int age,marks;
    cin>>age>>marks;
    
    if(age>18 && marks>=50){
        cout<<"eligible";
    }
    else{
        cout<<"not eligible";
    }
    
    return 0;
}


