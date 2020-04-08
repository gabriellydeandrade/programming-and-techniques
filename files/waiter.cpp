#include <iostream>

using namespace std;

int main(){

    int tray_number, can_number, glass_number, glass_broken_number = 0;
    cin >> tray_number;

    int cont = 0;
    while (cont < tray_number){

        cin >> can_number >> glass_number;

        if (can_number > glass_number){
            glass_broken_number += glass_number;
        }

        cont += 1;
    }

    cout << glass_broken_number;

    return 0;
}
