#include <iostream>

using namespace std;

int main(){

    int accesses_per_day, days_of_access, day_achieved, accesses_acumulated = 0, i = 1;
    cin >> days_of_access;

    while (i <= days_of_access) {

        cin >> accesses_per_day;

        if (accesses_acumulated < 1000000) {
            accesses_acumulated += accesses_per_day;
            day_achieved = i;
        }

        i += 1;

    }


    cout << day_achieved;

    return 0;
}
