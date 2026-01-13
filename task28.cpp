#include <iostream>
using namespace std;

int main() {

    float temp;

    cout << "Enter the current temperature of the motor: ";
    cin >> temp;

    while (temp >= 80 and temp != 60) {
        temp -= 2;

        cout << "It is ok now"<< endl;

    }






    return 0;
}