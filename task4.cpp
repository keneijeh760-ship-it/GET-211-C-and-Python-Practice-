#include <iostream>;
using namespace std;

const float a = 9.81;

float calculateDisplacement(float time, float initialVelocity);
int main() {

    float time = 5.0;
    float initialVelocity = 20.0;
    float displacement;

    displacement = calculateDisplacement( time,  initialVelocity);

    cout << "Given an initial velocity of " << initialVelocity << " m/s"
         << " over " << time << " seconds," << endl;
    cout << "The displacement is: " << displacement << " meters" << endl;

    return 0;

}

float calculateDisplacement(float time, float initialVelocity) {
    return (time * initialVelocity ) + (0.5 * 9.81 * time * time);
}