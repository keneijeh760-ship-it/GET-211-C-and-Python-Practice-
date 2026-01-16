#include <iostream>
using namespace std;

int main () {
    int voltage = 10;
    int *ptr_voltage;
    ptr_voltage = &voltage;


    int current = 20;
    int *current_ptr = &current;
    int current_value = *current_ptr;

    cout << "Voltage is " << voltage << endl;
    cout<< "Voltage address is "  << &voltage << endl;
    cout << "Voltage via pointer "<< *ptr_voltage << endl;



    return 0;
}