#include <iostream>

using namespace std;

int main() {
    int marks;

    cout << "Enter the student's marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A (Excellent)" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B (Very Good)" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C (Good)" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D (Pass)" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }
return 0;
}