#include <iostream>
using namespace std;

int main () {
    double voltage, current;

    cout << "Enter your Voltage Value: " ;
    cin >> voltage;

    cout<< "Enter your current current value: ";
    cin >> current;

    double Power = voltage * current;

    cout << "Your Power value with a voltage of "<< voltage<< " Volts and current value of " << current<< " ampere is " << Power<< endl;


    return 0;
}