#include <iostream>
using namespace std;


int main() {
    int time;
    float a = 9.81;

    cout << "How long are doing this for : ";
    cin >> time;


    for (int i; i <= time; ++i) {
        float displacement = 0.5 * a * i* i;

        cout << "At time"<< i << "the discplace ment was" << displacement << "meters" << endl;




    }









    return 0;
}