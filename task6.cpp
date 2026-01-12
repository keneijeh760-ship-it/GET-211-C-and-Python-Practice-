#include <iostream>

using namespace std;

int main() {
    float totalEnergy= 0.0;
    float targetEnergy = 120.0;
    float  hourlyEnergy;


    do {
        cout << "Enter the energy loggin the last hour (kWh)";
        cin>> hourlyEnergy;

        hourlyEnergy += totalEnergy;
        cout << "Current Total Energy Logged: " << hourlyEnergy << "kWh" << endl;
    }

    while (hourlyEnergy < targetEnergy);

    cout << "Energy audit complete. Total logged:" << hourlyEnergy << " kWh" << endl;
}
