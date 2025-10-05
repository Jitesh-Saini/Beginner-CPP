//find prime or not

#include <iostream>
using namespace std;

string prime(int n) {
    if (n <= 1) {
        return "not prime";
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        return "prime";
    } else {
        return "not prime";
    }
}

int main() {
    cout << prime(5);
}

