#include <iostream>
using namespace std;

int main () {
    double ExamScore;

    double passMark = 70;
    double maxMark = 100;


    cout << "Enter your exam score: "
;
    cin >> ExamScore;

    if (ExamScore < passMark) {
        cout << "You failed boy ";
    }

    else if (ExamScore <= maxMark and ExamScore >= passMark) {
        cout << "You successful boy, you passed, your future is bright ";
    }

    else {
        cout << "Out of Bounds, from this i can tell you failed, mumu";
    }

    return 0;
}