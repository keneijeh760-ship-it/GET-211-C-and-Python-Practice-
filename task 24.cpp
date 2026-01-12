#include <iostream>
using namespace std;


int main () {

    int val;
    cout << "Enter the humber of value you want: ";
    cin >> val;
    int sum = 0;

    for (int i =0;i < val + 1; ++i) {
        sum += i;

    }

    cout << "Your total sum is " << sum << endl;







    return 0;
}