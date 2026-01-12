#include <iostream>
using namespace std;

int main () {
    int voltage = 10;
    int *pointer;
    pointer = &voltage;

    cout << "the adress of" << *pointer << endl;

    cout << &voltage;










    return 0;
}