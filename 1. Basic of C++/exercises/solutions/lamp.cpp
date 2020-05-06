#include <iostream>

using namespace std;

int main(){

    int lamp_a = 0, lamp_b = 0; // Lamps are off at the beggining
    int times_light_switch, light_switch;
    cin >> times_light_switch;

    for (int i=0; i < times_light_switch; i++) {

        cin >> light_switch;

        if (light_switch == 1) {
            lamp_a = not(lamp_a);
        }

        if (light_switch == 2) {
            lamp_a = not(lamp_a);
            lamp_b = not(lamp_b);
        }

    }

    cout << lamp_a << "\n" << lamp_b;

    return 0;
}
