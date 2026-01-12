#include <iostream>
using namespace std;

float studentAverage(float totalScore ) {
    return totalScore/3;
};

int main () {
    int numberStudents;
    float studentScore;
    float totalScore = 0;
    cout<< "Enter the Number of students: ";
    cin >> numberStudents;

    for (int i =0; i < numberStudents; i++) {
        for (int j =0; j < 3; j ++) {
            cout<< "Score " << j + 1;
            cin>>  studentScore;
            totalScore += studentScore;
        }

        float result = studentAverage(totalScore);
        cout <<"Student "<< i + 1 <<" got "<< result << endl;


    }
    return 0;
}