#include <iostream>

using namespace std;

/* Given a number, find your divisors */

int main(){

    int number;
    cin >> number;

    cout << 1 << " ";

    for (int i=2; i < number; i++){
        if (number % i == 0){
            cout << i << " ";
        }
    }

    cout << number;

    return 0;
}
