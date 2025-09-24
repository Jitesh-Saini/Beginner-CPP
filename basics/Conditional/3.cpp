//write a program to find the greatest of three numbers using nested if-else statement.

// #include <iostream>
// using namespace std;
// int main() {
    
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if(a>b){
//         if(a>c){
//             cout << a << " is greatest\n";
//         } else {
//             cout << c << " is greatest\n";
//         }
//     } else {
//         if(b>c){
//             cout << b << " is greatest\n";
//         } else {
//             cout << c << " is greatest\n";
//         }
//     }

//     return 0;
// }


#include <iostream>
using namespace std;    
int main() {
    
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int greatest = a; // Assume a is the greatest
    if (b > greatest) {
        greatest = b; // Update greatest if b is larger
    }
    if (c > greatest) {
        greatest = c; // Update greatest if c is larger
    }
    cout << greatest << " is the greatest\n";

    return 0;
}