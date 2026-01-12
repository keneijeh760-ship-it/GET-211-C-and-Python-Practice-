#include <iostream>
using namespace std;

int main () {
    double Voltage;
    double Resistance;


    cout<<"Enter your Voltage: "<< endl;
    cin>> Voltage;

    cout<< "Enter your Resistance Value: "<< endl;
    cin>> Resistance;

    double Power = (Voltage * Voltage )/Resistance;
    cout<< "Your Power Values is "<< Power << " Watts "<< endl;


    return 0;

}