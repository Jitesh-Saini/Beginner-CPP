// 9. Write a program to find the greatest of three numbers.

#include <iostream>
using namespace std;
int main() {
    
    int a;
    int b;
    int c;
    cout << "Enter three numbers: ";
    cin >> a >> b >>c;


    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    if(c>greatest){
        greatest = c;
    }
    
    cout<<greatest<<"is greatest";
    return 0;
}
