#include<iostream>
using namespace std;

int main(){

    int num[128];
    int input, len = 0, odds = 0, evens = 0;
    while (true) {
        cout << "Enter an integer: ";
        cin >> input;
        if (input == 0) {
            break;
        }
        num[len] = input;
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (num[i]%2 == 0) {
            evens += 1;
        }
        else {
            odds += 1;
        }
    }

    cout << "#Even numbers = " << evens << endl;
    cout << "#Odd numbers = " << odds << endl;
    return 0;
}
