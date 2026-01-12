#include <iostream>
using namespace std;

int main() {
    double powerConsumption = 0.0;
    double energyThreshold = 500.0;

    do {
        double power = 50;
        powerConsumption += power;
        cout<< "Cuurent power COnsumption: " << powerConsumption << "kW." << endl;


    }while (powerConsumption < energyThreshold);

    return 0;
}