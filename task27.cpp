#include <iostream>
using namespace std;

int main() {

    float temp;
    cout << "Enter th current temperature of your motor: ";
    cin >> temp;


    if (temp >= 100) {
        cout<< "Critical! Immidiate Shutdown,"<< endl;

    }

    else if (temp >= 80) {
        cout << "Warning! High Temperature. Initiating Cooling."<< endl;
    }

    else {
        cout << "Normal Operation Condition"<< endl;
    }









    return 0;
}