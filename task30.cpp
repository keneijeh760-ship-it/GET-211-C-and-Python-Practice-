#include <iostream>
using namespace std;


float calculatePower (float Voltage,  float Resistor) {
    return (Voltage * Voltage)/Resistor;
};


 int main() {

     float Resistor_Value[5] = {150, 220, 330, 470, 100};
     float Voltage ;



     for (int i = 0; i < 5; i ++) {
         cout << "Enter your Voltage Value: ";
         cin >> Voltage;

         float result = calculatePower(Voltage, Resistor_Value[i]);
         cout << endl << result << endl;

     }












     return 0;
 }