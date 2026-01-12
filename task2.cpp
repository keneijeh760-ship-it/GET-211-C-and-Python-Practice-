#include <iostream>
using namespace std;

int main() {
    double Voltage;
    double Resistance;

    cout<< "Enter your value: "<< endl;
    cin>> Voltage;

    cout<< "Enter your Resitance" << endl;
    cin >> Resistance;

    double Power = (Voltage * Voltage )/ Resistance  ;

    cout<< "Your Final value is "<< Power << " Watts"<< endl;


    if (Power >= 100) {
        cout << "Power of is High. System overload warning!";
    }

    else if (Power >= 50) {
        cout<< "Power is Normal. Continue Operation.";
    }

    else {
        cout << "Power is Low. Standby mode.";
    }



}