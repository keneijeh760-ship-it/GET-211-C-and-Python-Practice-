#include <iostream>
using namespace std;

float waterDivider(float totalWater, float totalCapacity, float containerCapacity);
int main () {
    int container;
    float containerCapacity, totalWater, totalCapacity = 0;
    cout << "Enter the total Volume of Water: ";
    cin >> totalWater;
    cout << "Enter the number of containers: ";
    cin >> container ;

    float contianerList[container];
    for (int i = 0; i < container; i++) {
        cout << "Enter the total Capacity of the Container: ";
        cin >> contianerList[i];
        totalCapacity += contianerList[i];
    }
    for (int i = 0;i < container; i ++ ) {
        float result = waterDivider( totalWater,contianerList[i] , totalCapacity);
        cout << "The container with capacity of  " << contianerList[i]<< " the water allocated is "<< result << endl;

    }
    return 0;
}
float waterDivider(float totalWater,  float totalCapacity, float containerCapacity) {
    return (containerCapacity / totalCapacity) * totalWater;


};

