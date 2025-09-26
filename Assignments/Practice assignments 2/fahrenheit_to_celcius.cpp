// convert fahrenheit to celcius

#include <iostream>
using namespace std;


int main()
{
    int fah;
    cin>>fah;
    
    int cel = (fah-32)*5/9;
    
    cout << cel;

    return 0;
}

