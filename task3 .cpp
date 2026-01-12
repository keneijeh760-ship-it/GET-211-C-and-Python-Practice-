#include <iostream>
using namespace std;

int main() {
    int sensorReadings[6] = {25, 20, 15, 35, 40, 20};
    int count = 0;

    for (int i = 0; i < 6; i ++ ) {
        if (sensorReadings[i] > 30) {

            count += 1 ;
            cout << "High reading detected at index "<< i<< " of "<< sensorReadings[i] << endl;


        }
    }
cout<< count << endl;



}