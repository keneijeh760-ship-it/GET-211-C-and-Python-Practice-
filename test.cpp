#include <iostream>
using namespace std;

    float sharedElectricity(float totalElectricity, float maxCapacity, float containerCapacity) {
        return (containerCapacity / maxCapacity) * totalElectricity;
    }

int main() {

    int household;
    float totalElectricity;
        float maxCapacity = 0;
        cout << "Enter the total Electricity: ";
        cin >> totalElectricity;

        cout << "Enter the number of Households: ";
        cin >> household;


        float containerCapacity[household];
        for (int i =0; i <household; i++) {

            cout <<  "Enter the Capacity of the household: ";
            cin >> containerCapacity[i];

            maxCapacity += containerCapacity[i];

        }

        for (int i= 0; i <household; i++) {
            float result = sharedElectricity(totalElectricity, maxCapacity, containerCapacity[i]);

            cout << "The shared Electricity is: " << result << endl;

        }





}