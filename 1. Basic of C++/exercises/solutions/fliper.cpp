#include <iostream>

using namespace std;

int main(){

    int P, R;

    cin >> P >> R;

    if (P == 0){
        cout << "C";
    }
    else if (P == 1){
        if (R == 0){
            cout << "B";
        }
        else if (R == 1){
            cout << "A";
        }
    }

    return 0;
}
