#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int numbers_cont;
    double number;
    cin >> numbers_cont;

    cout << fixed << setprecision(4); // Write using a precision of 4 spaces after the comma

    for (int i=0; i < numbers_cont; i++){
        cin >> number;
        cout << sqrt(number) << "\n";
    }

    return 0;
}
