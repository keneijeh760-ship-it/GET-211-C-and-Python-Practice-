#include <iostream>
using namespace std;

int main () {
    float batteryVoltage = 0.0;
    float targetVoltage = 12.0;

    do {
        batteryVoltage += 1;
        cout<< batteryVoltage<<endl;
    }

    while ( batteryVoltage < targetVoltage);
}