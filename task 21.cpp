#include <iostream>
#include <string>
using namespace std;

int main () {
    double celciusVal, fahrenVal;
    double celciustofahr = ((celciusVal * 1.8)/5) + 32;
    double fahrtocelcius = ((fahrenVal - 32)* 5)/9;
    string option;

    cout << "Converting Celcius or Fahrenheit ?";
    cin >> option;

    if (option == "Celcius") {
        cout << "Enter your Celius Value: ";
        cin >> celciusVal;

        cout << "Your fahrenheit value at " << celciusVal << "  celcius is " << fahrenVal << endl;



    }

    else if (option == "Fahrenheit") {
        cout << "Enter your Fahrenheit Value: ";
        cin >> fahrenVal;

        cout << "Your celcius value at " << fahrenVal << "  fahrenheit is " << celciusVal << endl;
    }

    else {
        cout<< "Invalid Option!!!"<< endl;
    }


    return 0;
}