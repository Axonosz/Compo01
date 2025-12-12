#include <iostream>
using namespace std;

int main() {
    int n;
    int even_count = 0;
    int odd_count = 0;

    while (true) {
        cout << "Enter an integer: ";
        if (!(cin >> n)) return 0; 
        if (n == 0) break; 
        if (n % 2 == 0) ++even_count;
        else ++odd_count;
    }

    cout << endl;
    cout << "#Even numbers = " << even_count << endl;
    cout << endl;
    cout << "#Odd numbers = " << odd_count << endl;

    return 0;
}
