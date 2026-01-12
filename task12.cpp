#include <iostream>
using namespace std;


int main() {
    double voltage;
    double current;

    cout << "Enter your Voltage value:" << endl;
    cin >> voltage;

    cout << "Enter your Current Value: " << endl;
    cin >> current;

    double sum = voltage + current;
    double difference = voltage - current;
    cout << "The sum of your values is :" << sum << endl;

    cout << "The difference betwwen your values is: " << difference<< endl;

    return 0;
}