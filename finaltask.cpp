#include <iostream>
#include <string>

using namespace std;

string checkStatus(float powerReading, int faultCode);

int main() {

    const int NUM_READINGS = 5;
    

    int faultCodes[NUM_READINGS] = {0, 101, 0, 203, 0};
    
    // Power in Kilowatts (kW)
    float powerReadings[NUM_READINGS] = {450.0, 550.0, 480.0, 600.0, 420.0};

    cout << "--- System Diagnostics Report ---" << endl;
    

    for (int i = 0; i < NUM_READINGS; ++i) {

        string currentStatus = checkStatus(powerReadings[i], faultCodes[i]);

        cout << "Index " << i << ": "
             << "Power: " << powerReadings[i] << "kW, "
             << "Fault Code: " << faultCodes[i] << " | "
             << "Status: " << currentStatus << endl;
    }

    cout << "-----------------------------------" << endl;
    cout << "Diagnostics complete." << endl;

    return 0;
}

string checkStatus(float powerReading, int faultCode) {
    const float POWER_THRESHOLD = 500.0;
    

    if (faultCode != 0) {

        return "CRITICAL FAULT: Code " + std::to_string(faultCode);
    } 

    else if (powerReading >= POWER_THRESHOLD && faultCode == 0) {

        return "HIGH POWER - Review";
    }

    else {

        return "Status OK";
    }
}