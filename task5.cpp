#include <iostream>
using namespace std;


int main() {
    float pressure = 150.0;
    const float Max_pressure = 200.0;
    int cycle = 0 ;


    while (pressure < Max_pressure) {
        pressure += 15;
        cout << pressure << endl;



        cycle += 1;
        cout << cycle << endl;
    }

    cout << "CRITICAL SAFETY LIMIT REACHED! Shutdown initiated at " << pressure << " psi" << endl;


}



