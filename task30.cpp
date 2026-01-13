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

     for (int i = 0; i < 5; ++i) {
         cout << Resistor_Value[i] << endl;
     }

     Resistor_Value[2] = 400;

     float result_2 = calculatePower(600, Resistor_Value[2]);

     cout << Resistor_Value[2] << endl;
     cout << result_2 << endl;












     return 0;
 }