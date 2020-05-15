#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x = -3.1415926535;


    int number_of_values, previous_number, number, cont=1, maximum_count=1;

    cin >> number_of_values;
    cin >> previous_number;

    for (int i=1; i < number_of_values; i++){

        cin >> number;


        if (previous_number == number) {
            cont += 1;
        }
        else {
            cont = 1;
        }

        if (cont > maximum_count) {
            maximum_count = cont;
        }

        previous_number = number;


    }

    cout << maximum_count;

    return 0;
}
